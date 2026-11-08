# JSON_LOADS -> JSON to python

import json

json_str='{"name": "Gyanendra","isStudent": true}'
py_obj=json.loads(json_str)

print(py_obj)
print(type(json_str))
print(type(py_obj))