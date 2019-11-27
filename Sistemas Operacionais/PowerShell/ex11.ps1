Clear-Host
Write-Host 'Ex11'
[float]$cels = Read-Host 'Digite a temperatura Celsius'
$fahr = ($cels * 9/5) + 32
Write-Host "$fahr graus Fahrenheit"