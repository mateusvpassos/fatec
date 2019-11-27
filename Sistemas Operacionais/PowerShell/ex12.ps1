Clear-Host
Write-Host 'Ex12'
[float]$val = Read-Host 'Digite o valor do boleto'
[float]$perc = Read-Host 'Digite o percentual de juros'
[int]$dias = Read-Host 'Digite a quantidade dias atrasados'
$prest = $val + ($val * ($perc/100))*$dias
Write-Host "$prest valor a ser pago"