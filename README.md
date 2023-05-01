# LTIMindtree_Internship

## Project:: Automating ML process for Smart Chillers and HVAC (heating , ventilation and air-conditioning)systems.

### My work ranged from creating Machine Learning Pipelines in AzureML , Doing Data Drift Detection using deepchecks, performing Time series analysis using LSTMs and ARIMAX, carrying out Data versioning using DVC , and managing the end-to-end machine learning lifecycle using MlFlow.


## Data Drift Detection using DEEPCHECKS

#### "Drift" is a term used in machine learning to describe how the performance of a machine learning model in production slowly gets worse over time. This can happen for a number of reasons, such as changes in the distribution of the input data over time or the relationship between the input (x) and the desired target (y) changing.Drift can be a big problem when we use machine learning in the real world, where data is often dynamic and always changing. 

## Algorithms to measure 

### Kolmogorov-Smirnov (K-S) test
#### The Kolmogorov-Smirnov (K-S) test is a nonparametric statistical test that is used to determine whether two sets of data come from the same distribution. It is often used to test whether a sample of data comes from a specific population or to compare two samples to determine if they come from the same population.The null hypothesis in this test is that the distributions are the same. If this hypothesis is rejected, it suggests that there is a drift in the model.The K-S test is a useful tool for comparing datasets and determining whether they come from the same distribution.

----------------------------------------------------------------------------------------------------------------------------------------------------------

## Time Series Data Analysis and predictions 

### ARIMA (Autoregressive Integrated Moving Average)
#### It stands for ‘Auto-Regressive Integrated Moving Average’, a set of models that defines a given time series based on its initial values, lags, and lagged forecast errors, so that equation is used to forecast forecasted values.If a time series has seasonal patterns, then you require to add seasonal terms, and it converts to SARIMA, which stands for ‘Seasonal ARIMA’.The ‘Auto Regressive’ in ARIMA indicates a linear regression model that employs its lags as predictors. Linear regression models work best if the predictors are not correlated and remain independent of each other. We want to make them stationary, and the standard approach is to differentiate them. This means subtracting the initial value from the current value. Concerning how complex the series gets, more than one difference may be required.

### LSTM Neural Net (long short term memory)
#### Long Short-Term Memory Networks is a deep learning, sequential neural network that allows information to persist. It is a special type of Recurrent Neural Network which is capable of handling the vanishing gradient problem faced by RNN. RNNs remember the previous information and use it for processing the current input. The shortcoming of RNN is they cannot remember long-term dependencies due to vanishing gradient. LSTMs are explicitly designed to avoid long-term dependency problems.The three parts of an LSTM unit are known as gates. They control the flow of information in and out of the memory cell or lstm cell. The first gate is called Forget gate, the second gate is known as the Input gate, and the last one is the Output gate. An LSTM unit that consists of these three gates and a memory cell or lstm cell can be considered as a layer of neurons in traditional feedforward neural network, with each neuron having a hidden layer and a current state.


----------------------------------------------------------------------------------------------------------------------------------------------------------

## Data version tracking using DVC & MlFlow
#### DVC is a free and open-source, platform-agnostic version system for data, machine learning models, and experiments.It is designed to make ML models shareable, experiments reproducible,and to track versions of models, data, and pipelines.DVC works on top of Git repositories and cloud storage.DVC basically creates a MD5 hash to track version of data and record past changes.
### MLFLOW
#### MLflow: A Machine Learning Lifecycle Platform.MLflow is a platform to streamline machine learning development, including tracking experiments, packaging code into reproducible runs, and sharing and deploying models. MLflow offers a set of lightweight APIs that can be used with any existing machine learning application or library (TensorFlow, PyTorch, XGBoost, etc), wherever you currently run ML code.
