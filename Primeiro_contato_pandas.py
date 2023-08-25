import pandas as pd

#criação de uma serie
series_obj = pd.Series([4, 7, 8, -2], index = ["a", "b", "c", "d"])

#serie
print("Serie: \n{}".format(series_obj))

#media da serie
print("\nMedia: {}".format(series_obj.mean()))

#dobro da serie
print("\ndobro: \n{}".format(series_obj*2))

#primeiro valor da serie
print("\nvalor do indice a : {}".format(series_obj["a"]))
