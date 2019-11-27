Clear-Host
Write-Host 'Ex3'
$pi = 3.1415
[float]$r = Read-Host 'Digite o raio'
$area = $pi * ($r*$r)
Write-Host "$area é a area"