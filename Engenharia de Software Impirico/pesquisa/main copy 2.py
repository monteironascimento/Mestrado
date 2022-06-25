from pydoc import describe
import pandas as pd
from scipy.stats import mannwhitneyu
from cliffs_delta import cliffs_delta
from sklearn.metrics import cohen_kappa_score
import matplotlib.pyplot as plt
from scipy import stats
import matplotlib.pyplot as plt 
import numpy as np

print('Foi feito um levantamento de microservicos, em java e c#')
print('Foi filtrado repositorios com quantidade de forks maior que 100, na qual tem uma maior relevancia')
print('')

dfjava = pd.read_csv('java.csv')
dfc = pd.read_csv('c.csv')
dfpython = pd.read_csv('python.csv')
dfscript = pd.read_csv('javascript.csv')

# Creating plot
print('============== JAVA =============')

data_2d=[dfjava.to_numpy(),dfc.to_numpy(),dfpython.to_numpy(),dfscript.to_numpy()]


a = np.array([np.array(dfjava.to_numpy()), np.array(dfc.to_numpy()), np.array(dfpython.to_numpy()), np.array(dfscript.to_numpy())]) 

# Ragged ndarray works correctly
plt.boxplot(x=a, positions=range(len(a)))
plt.show()

results = stats.kruskal(dfjava.to_numpy(), dfc.to_numpy(), dfpython.to_numpy(), dfscript.to_numpy())
print(results)
print('')

#d, res = cliffs_delta(dfjava.to_numpy(), dfc.to_numpy(), dfpython.to_numpy(), dfscript.to_numpy())
#print(d,res)