Clear-Host
Write-Host 'Ex8'
[float]$preco = Read-Host 'Digite valor do litro do combustivel'
[float]$valor = Read-Host 'Digite o valor a pagar'
$res = $valor / $preco
Write-Host "$res litros de combustivel"