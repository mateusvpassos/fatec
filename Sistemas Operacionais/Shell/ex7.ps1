Clear-Host
Write-Host 'Ex7'
$pNome = Read-Host 'Digite o primeiro nome'
$pSob = Read-Host 'Digite o sobrenome'
$nom = $pNome + " " + $pSob
Write-Host "$nom"