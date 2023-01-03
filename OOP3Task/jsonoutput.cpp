#include "jsonoutput.h"

void jsonoutput::historyout(std::string& str)
{
	std::vector<std::vector<std::string>> data;
	sqlshopinghistory get;
	get.getallusersaledata(data);

	String^ jsondoc;
	jsondoc += "{";
	jsondoc += "\"History\":";
	jsondoc += "[\n";
	for (int i = 0; i < data.size(); i++)
	{
		String^ id = msclr::interop::marshal_as<String^>(data[i][0]);
		String^ userid = msclr::interop::marshal_as<String^>(data[i][1]);
		String^ productid = msclr::interop::marshal_as<String^>(data[i][2]);
		String^ productname = msclr::interop::marshal_as<String^>(data[i][3]);
		String^ price = msclr::interop::marshal_as<String^>(data[i][4]);
		String^ time = msclr::interop::marshal_as<String^>(data[i][5]);
		jsondoc += "{" +
			"\"Id\":\"" + id + "\"," +
			"\"userid\":\"" + userid + "\"," +
			"\"productid\":\"" + productid + "\"," +
			"\"productname\":\"" + productname + "\"," +
			"\"price\":\"" + price + "\"," +
			"\"time\":\"" + time + "\"";
			
		if (i + 1 == data.size())
		{
			jsondoc += "}\n";
		}
		else
		{
			jsondoc += "},\n";
		}
	}
	jsondoc += "]";
	jsondoc += "}";

	str = msclr::interop::marshal_as<std::string>(jsondoc);
	
	
}
void jsonoutput::programlogout(std::string& str)
{
	std::vector<std::vector<std::string>> data;
	sqlprogramlog get;
	get.getprogramlogdata(data);

	String^ jsondoc;
	jsondoc += "{";
	jsondoc += "\"ProgramLog\":";
	jsondoc += "[\n";
	for (int i = 0; i < data.size(); i++)
	{
		String^ id = msclr::interop::marshal_as<String^>(data[i][0]);
		String^ userid = msclr::interop::marshal_as<String^>(data[i][1]);
		String^ productid = msclr::interop::marshal_as<String^>(data[i][2]);
		String^ action = msclr::interop::marshal_as<String^>(data[i][3]);
		String^ time = msclr::interop::marshal_as<String^>(data[i][4]);
		jsondoc += "{" +
			"\"Id\":\"" + id + "\"," +
			"\"userid\":\"" + userid + "\"," +
			"\"productid\":\"" + productid + "\"," +
			"\"action\":\"" + action + "\"," +
			"\"time\":\"" + time + "\"";
			if (i + 1 == data.size())
			{
				jsondoc += "}\n";
			}
			else
			{
				jsondoc += "},\n";
			}
	}
	jsondoc += "]";
	jsondoc += "}";

	str = msclr::interop::marshal_as<std::string>(jsondoc);
}