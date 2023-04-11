from azureml.core import Workspace, Datastore,Dataset
import os
import psycopg2
import pandas as pd

subscription_id = os.getenv("SUBSCRIPTION_ID", default="a401ad02f500")
resource_group = os.getenv("RESOURCE_GROUP", default="rg")
workspace_name = os.getenv("WORKSPACE_NAME", default="workspace_nameML")
workspace_region = os.getenv("WORKSPACE_REGION", default="East US")

ws = Workspace(subscription_id= subscription_id,resource_group=resource_group,workspace_name=workspace_name)

datastore = Datastore.get(ws,datastore_name = 'workspaceblobstore')

#lines 16-90 if access to postgres is available
#conn = psycopg2.connect(
#        host= "servername.postgres.database.azure.com",
#        database = "pg",
#        user = "user",
#        password = "pwd"
#)


#cursor = conn.cursor()
#cursor.execute("select * from a")
#df = df.resample('1Min', on='timestamp').mean()
#df.reset_index(inplace= True)
#df = df.dropna()
#df.to_csv("cleaned_data_forecast.csv")



datastore.upload_files(
        files = [os.path.abspath("cleaned_data_forecast.csv")], overwrite=True, target_path=None, show_progress=True)


dataset = Dataset.Tabular.from_delimited_files(path = [(datastore,'cleaned_data_forecast.csv')])
dataset.register(ws, "cleaned_data_forecast",create_new_version= True)


