kubectl get secrets mysecret -o yaml | yq eval .data | cut -d ' ' -f2 | base64 -d
