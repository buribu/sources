	<?php
		//require_once 'classe/conexao.class.php';
		//require_once 'classe/crud.class.php';
	function __autoload($classe)
	{
	include_once ("classe/$classe.class.php");
	}
		$con = new conexao(); 
		$con->connect(); 

		if(isset ($_POST['cadastrar'])){ 
			$Nome = $_POST['nome'];
			$Sobrenome = $_POST['sobrenome'];
			$Aniversario = $_POST['aniversario'];
			$Endereco = $_POST['endereco'];
			$Telefone = $_POST['telefone'];
			$CPF = $_POST['cpf'];
			$Email = $_POST['email'];
			
			
			$crud = new crud('tbagenda');  // instancia classe com as operaçoes crud, passando o nome da tabela como parametro
			$crud->inserir("codigo,Nome,Sobrenome,Aniversario,Endereco,Telefone,CPF,Email", "'null','$Nome','$Sobrenome','$Aniversario','$Endereco','$Telefone','$CPF','$Email'"); // utiliza a funçao INSERIR da classe crud
	}
		$con->disconnect();
	?>