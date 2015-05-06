#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
	string self=getenv("SCRIPT_NAME");
  const string values[] = {
      "AUTH_TYPE","CONTENT_LENGTH","CONTENT_TYPE","GATEWAY_INTERFACE","HTTP_ACCEPT",
      "HTTP_REFERER","HTTP_USER_AGENT","PATH_INFO","PATH_TRANSLATED", "QUERY_STRING",
      "REMOTE_ADDR","REMOTE_HOST","REMOTE_USER","REQUEST_METHOD","SCRIPT_NAME",
      "SCRIPT_FILENAME","SERVER_NAME","SERVER_PORT","SERVER_PROTOCOL","HTTP_COOKIE"
  };  

  string values2[20];
  for(int i=0;i<20;i++)
  {
    char const* tmp = getenv( values[i].c_str() );
    if(tmp==NULL) values2[i]="";
    else          values2[i]=tmp;
  }
	cout << "content-type:text/html; charset=euc-kr\n\n"<< endl;
  cout << "<div style=\"width:600px; background-color:#5FF;\">" << endl;
	cout << "METHOD=POST ENCTYPE=\'multipart/form-data\' \n"<<endl;
	cout << "<FORM ACTION="+self+" METHOD=post ENCTYPE=\'multipart/form-data\'>"<<endl;
	cout << "aName : <input type=text name=aName><br>\n"<<endl;
	cout << "aPassword : <input type=password name=aPW><br>\n"<<endl;
	cout << "aFile : <input type=file name=aFile><br>\n"<<endl;
  cout << "aCheckBox : <input type=checkbox name=aCB value=CH1><br> "<<endl;
  cout << "Radio: <input type=radio name=aRadio value=1>Yes, <input type=radio name=aRadio value=0>No" << endl;
  cout << "<select name=aSelect>  <option value=1>first</option>  <option value=2>second</option>  <option value=3>third</option>  <option value=4>fourth</option></select>" << endl;

	cout << "Contents : <textarea name='Contents' rows='5' cols='50'></textarea>\n"<<endl;
	cout << "Submit : <input type=submit value=submit>"<<endl;
	cout << "</form>"<<endl;
	cout << "</div>"<<endl;

  cout << "<div style=\"width:600px; background-color:#FF5;\">" << endl;
	cout << "METHOD=GET \n"<<endl;
	cout << "<FORM ACTION="+self+" METHOD=get>"<<endl;
	cout << "aName : <input type=text name=aName><br>\n"<<endl;
	cout << "aPassword : <input type=password name=aPW><br>\n"<<endl;
	cout << "aFile : <input type=file name=aFile><br>\n"<<endl;
  cout << "aCheckBox : <input type=checkbox name=aCB value=CH1><br> "<<endl;
  cout << "Radio: <input type=radio name=aRadio value=1>Yes, <input type=radio name=aRadio value=0>No" << endl;
  cout << "<select name=aSelect>  <option value=1>first</option>  <option value=2>second</option>  <option value=3>third</option>  <option value=4>fourth</option></select>" << endl;
	cout << "Contensts : <textarea name='Contents' rows='5' cols='50'></textarea>\n"<<endl;
	cout << "Submit : <input type=submit value=submit>"<<endl;
	cout << "</form>\n\n"<<endl;
  cout << "</div>"<<endl;


 cout << "<ul>" << endl;
 for(int i=0;i<20;i++) cout << "<li>"+values[i] << ":" << values2[i] << "</li>"<<endl;
 cout << "</ul>" << endl;

  return 0;
}
