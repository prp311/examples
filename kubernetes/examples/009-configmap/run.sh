kubectl create configmap testconfigmap --from-literal=app=front-end --from-literal=type=java

kubectl run  busybox --image=busybox -o yaml --dry-run=client --command -- sleep 3600
