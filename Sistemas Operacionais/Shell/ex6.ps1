Clear-Host
Write-Host 'Ex6'
[float]$dol = Read-Host 'Digite o valor do dolar'
[float]$rea = Read-Host 'Digite quantos reais possui'
$res = $rea / $dol
Write-Host "Você possui $res dolares"