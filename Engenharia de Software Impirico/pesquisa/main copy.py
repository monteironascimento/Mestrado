from pydoc import describe
import pandas as pd
from scipy.stats import mannwhitneyu
from cliffs_delta import cliffs_delta
from sklearn.metrics import cohen_kappa_score
import matplotlib.pyplot as plt
from scipy import stats

print('Foi feito um levantamento de microservicos, em java e c#')
print('Foi filtrado repositorios com quantidade de forks maior que 100, na qual tem uma maior relevancia')
print('')

dfjava = pd.read_csv('java.csv')
dfc = pd.read_csv('c.csv')

# Creating plot
print('============== JAVA =============')
a = [dfjava.describe(), dfc.describe()]
print(dfjava.describe())
plt.boxplot(dfjava)
plt.show()

results = mannwhitneyu(dfjava.to_numpy(), dfc.to_numpy())
print(results)
print('')

stats.kruskal(dfjava.to_numpy(), dfc.to_numpy(), dfc.to_numpy())

d, res = cliffs_delta(dfjava.to_numpy(), dfc.to_numpy())
print(d,res)