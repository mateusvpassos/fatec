Clear-Host
Write-Host 'Ex10'
[float]$fahr = Read-Host 'Digite a temperatura Fahrenheit'
$cels = ($fahr - 32) * (5/9)
Write-Host "$cels graus Celsius"