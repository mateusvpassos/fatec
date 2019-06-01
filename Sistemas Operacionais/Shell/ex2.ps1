Clear-Host
Write-Host 'Ex2'
[float]$n1 = Read-Host 'Digite o primeiro número'
[float]$n2 = Read-Host 'Digite o segundo número'
[float]$n3 = Read-Host 'Digite o terceiro número'
$res = ($n1 + $n2 + $n3)/3
Write-Host "$res é a média"