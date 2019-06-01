Clear-Host
Write-Host 'Ex1'
[float]$n = Read-Host 'Digite um número'
$res = $n * $n * $n
Write-Host "$res é o cubo de $n"