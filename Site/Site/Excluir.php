	<?php
		//require_once 'classe/conexao.class.php';
		//require_once 'classe/crud.class.php';
	function __autoload($classe)
	{
	include_once ("classe/$classe.class.php");
	}
			$con = new conexao();
			$con->connect();

			$crud = new crud('tbagenda');
			$id = $_GET['codigo'];
			if(is_numeric($id))
	{
			$crud->excluir("codigo = $id");

			$con->disconnect();
	}
	else
	{
			echo "<script>alert ('Dados incoerrentes');location='FormDeleta.php';</script>";

		}

	?>