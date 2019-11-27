Clear-Host
Write-Host 'Ex19'
[float]$tempo = Read-Host 'Digite o tempo gasto em horas'
[float]$velocidade = Read-Host 'Digite a velocidade média'

$dist = $tempo * $velocidade
$qtdLitro = $dist / 12

Write-Host "$velocidade km/h, $tempo horas, $dist km, $qtdLitro litros gastos"