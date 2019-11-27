Clear-Host
Write-Host 'Ex17'
[int]$anos = Read-Host 'Digite os anos'
[int]$meses = Read-Host 'Digite os meses'
[int]$dias = Read-Host 'Digite os dias'

$totAn = $anos * 12
$meses = $totAn + $meses
$totM = $meses * 30
$dias = $totM + $dias

Write-Host "$dias total de dias de vida;"