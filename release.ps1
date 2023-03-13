# Use this Powershell script to push releases
$version = "v1.0.0" 
$commit  = "initial stable release"
Write-Output $version > version.tag 
git add . && git commit -m "$commit" && git push origin && gh release create $version --title "$version" --notes "$commit"