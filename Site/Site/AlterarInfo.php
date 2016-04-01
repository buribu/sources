	<?php
		require_once 'classe/conexao.class.php';
		require_once 'classe/crud.class.php';
	function __autoload($classe)
	{
	include_once ("classe/$classe.class.php");
	}
		$con = new conexao(); 
		$con->connect(); 
	if(isset ($_POST['Alterar'])){
			$getId = $_POST['codigo'];
			$Nome = $_POST['Nome'];
			$Sobrenome = $_POST['Sobrenome'];
			$Aniversario = $_POST['Aniversario'];
			$Endereco = $_POST['Endereco'];
			$Telefone = $_POST['Telefone'];
			$CPF = $_POST['CPF'];
			$Email = $_POST['Email'];
			$crud = new crud('tbagenda');
			$crud->atualizar("codigo='$getId',Nome='$Nome',Sobrenome='$Sobrenome',Aniversario='$Aniversario',Endereco='$Endereco',Telefone='$Telefone',CPF='$CPF',Email='$Email'"); // utiliza a funçao ATUALIZAR da classe crud
	 echo "<script>alert ('Dados Alterados com sucesso');location='/site/pages/VisualizarGeral.php';</script>";

		}
?>