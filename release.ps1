# Use this Powershell script to push releases
$version = "v1.1.1" 
$commit  = "missing dll prefix added"
Write-Output $version > version.tag 
git add . && git commit -m "$commit" && git push origin && gh release create $version --title "$version" --notes "$commit"