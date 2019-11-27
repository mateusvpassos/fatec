Clear-Host

Write-Host 'Olá Mundo'
Write-Host "Faculdade de Tecnologia de Ourinhos"

$nome = Read-Host "Qual o seu nome?"
[int]$idade = Read-Host "Qual a sua idade?"
[float]$salario = Read-Host "Qual o seu salario?"

$n = 2
$n2 = 5
$triplo = $n * $n * $n
$media = ($n + $n2) / 2

[float]$dist = Read-Host "Qual a distancia percorrida em km?"
Clear-Host
[float]$temp = Read-Host "Quantas horas o percurso?"
Clear-Host
$resMed = $dist / $temp
Write-Host "$resMed km/h a velocidade Média!"

[int]$anoNasc = Read-Host "Qual o ano de nascimento?"
Clear-Host
$idade = 2019 - $anoNasc
Write-Host "$idade anos de idade"

[float]$base = Read-Host "Qual a base em metros?"
Clear-Host
[float]$altura = Read-Host "Qual a altura em metros?"

$areaRet = $base * $altura
Write-Host "$areaRet m² de área"
