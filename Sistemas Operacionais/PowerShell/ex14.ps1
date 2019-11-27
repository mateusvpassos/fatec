Clear-Host
Write-Host 'Ex14'
[float]$a = Read-Host 'Digite o valor de A'
[float]$b = Read-Host 'Digite o valor de B'
Write-Host "Antes: A = $a, B = $b"

$temp = $a
$a = $b
$b = $temp

Write-Host "Depois: A = $a, B = $b"