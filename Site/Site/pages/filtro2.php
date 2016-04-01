<?php
function __autoload($classe)
{
include_once ("../classe/$classe.class.php");
}
$con = new conexao(); 
$con->connect(); 
?>
<!DOCTYPE html>
<html>
<head>
	<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
	<link href="../CSS/estilo.css" rel="stylesheet" type="text/css">
	<title></title>
</head>
<body>

<div class="container">

	<div class="upperbar"> . </div>
	<a href="../logout.php" class= "button4 four">Sair</a>

	<div align="center" class="header"><a href="VisualizarGeral.php">Agenda<span>PHP</span> </a></div>


	<div class="hr"><hr></div>


    <div class="menu" align="center">
    
		<a href="VisualizarGeral.php" class="button1 one">Home</a>   
		
			<a href="formulario.php" class="button1 one">Novo Cadastro</a>
			   
				<!--<a href="VisualizarGeral.php" class="button1 one">Agenda</a>
				
					<a href="frame.html" class="button1 one">Frame =)</a>-->
                
	</div>
    

	<div class="hr"><hr></div>

		<br>

 <div class="content" align="center"> <br><br><br>
  
    <center>
		<table style="border: 3px solid white;">
			<thead align="center">
				<tr>
					<th><a href="filtro1.php">Nome</a></th> <th><a href="filtro2-1.php">Sobrenome</a></th>
					<th><a href="filtro3.php">Aniversario</a></th> <th>   EndereÇo  </th> <th> Telefone </th> <th> CPF </th> <th><a href="filtro4-1.php">Email</a></th> <th> </th> <th> </th>
				</tr>
			</thead>
			<tbody>
				<?php
					$consulta = mysql_query("SELECT * FROM `tbagenda` ORDER BY `tbagenda`.`Sobrenome` ASC");
					while($campo = mysql_fetch_array($consulta)){
				?>
					<tr>
						<td>
						<span class="span2"><?php echo $campo['Nome']; ?></span>
						</td>
						
						<td>
						<span class="span2"><?php echo $campo['Sobrenome']; ?></span>
						</td>
						
						<td>
						<span class="span2"><?php echo $campo['Aniversario']; ?></span>
						</td>
						
						<td>
						<span class="span2"><?php echo $campo['Endereco'];?></span>
						</td>
						
						 <td>
							<span class="span2"><?php echo $campo['Telefone'];?></span>
						</td>
						
						<td>
							<span class="span2"><?php echo $campo['CPF'];?></span>
						</td>
							
						<td>
							<span class="span2"> <?php echo $campo['Email'];?></span>
						</td>
																		
						<td>
							<a href="FormAlterar.php?Codigo=<?php echo $campo['codigo']; //pega o campo ID para a ediçao ?>" class="button3 three">Editar</a>
						</td>
						
						<td>
							<a href="../excluir.php?codigo=<?php echo $campo['codigo'];  //pega o campo ID para a exclusao ?>" class="button3 three">Excluir</a>
						</td>
						
					</tr>
						
				<?php }
				?>
			</tbody>
		</table>
	</center>
</div>
        
<div class="footer"> . </div>

</div>
</body>
</html>

<?php
	$con->disconnect(); 
?>