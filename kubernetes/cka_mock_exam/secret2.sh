 kubectl get secrets mysecret2 -o yaml | yq eval .data.username | base64 -d
 echo

 kubectl get secrets mysecret2 -o yaml | yq eval .data.password | base64 -d
 echo
