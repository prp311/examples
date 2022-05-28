kubectl create secret generic testsecret1 --from-literal=user=myuser1 --from-literal=password=mypassword1
kubectl get secrets testsecret1 -o jsonpath='{.data.user}'     | base64 -d
kubectl get secrets testsecret1 -o jsonpath='{.data.password}' | base64 -d
