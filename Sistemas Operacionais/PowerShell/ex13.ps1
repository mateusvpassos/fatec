Clear-Host
Write-Host 'Ex13'
[int]$qtdE = Read-Host 'Digite quantidade de eleitores'
[int]$vtBranco = Read-Host 'Digite a quantidade de votos brancos'
[int]$vtNulos = Read-Host 'Digite a quantidade de votos nulos'
[int]$vtValidos = Read-Host 'Digite a quantidade de votos válidos'

$brn = ($vtBranco/$qtdE)* 100
$nul = ($vtNulos/$qtdE) * 100
$val = ($vtValidos/$qtdE) * 100
Write-Host "$brn % Brancos, $nul % Nulos, $val % Válidos"