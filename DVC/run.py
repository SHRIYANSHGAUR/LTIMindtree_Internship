import os
import warnings
import sys
import logging
import pandas as pd
import numpy as np
from sklearn.metrics import mean_squared_error, mean_absolute_error, r2_score
from sklearn.model_selection import train_test_split
from sklearn.linear_model import ElasticNet

import mlflow
import mlflow.sklearn
import dvc.api



logger = logging.getLogger(__name__)


path='/data/hvac.csv'
repo='https://github.com/SHRIYANSHGAUR/track'


data_url = dvc.api.get_url(path=path, repo=repo)
mlflow.set.experiment('demo')

def eval_metrics(actual,pred):
    rmse= np.sqrt(mean_squared_error(actual,pred))
    mae=mean_absolute_error(actual,pred)
    r2=re_score(actual,pred)
    return rmse, mae, r2

if __name__ == '__main__':
    warning.filerwarning('ignore')
    np.random.seed(40)

    data = pd.read_csv(data_url, sep=',')

    mlflow.log_param('data_url', data_url)
    mlflow.log_param('data_version', version)
    mlflow.log_param('input_rows', data.shape[0])
    mlflow.log_param('data_url', data.shape[1])

    train, test = train_test_split(data)

    train_x= train[:,:-1]
    test_x= test[:,:-1]
    train_y= train[:,-1]
    test_y= test[:,-1]
    
    #log the columns used for modelling

    cols_x = pd.DataFrame(list(train_x.columns))
    cols_x.to_csv('features.csv', header=False, index=False)
    mlflow.log_artifact('features.csv')

    cols_y = pd.DataFrame(list(train_y.columns))
    cols_y.to_csv('targets.csv', header=False, index=False)
    mlflow.log_artifact('targets.csv')

    alpha = float(sys.argv[1]) if len(sys.argv) >1 else 0.5
    l1 = float(sys.argv[1]) if len(sys.argv) >2 else 0.5
    
    lr= ElasticNet(alpha=alpha, l1_ratio =l1, random_state=42)
    lr.fit(train_x, train_y)


