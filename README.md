#encryptBash
This project born of need to encode some bash scripts.

The usage of the script if the next

    ./bash-compile
        [PARAMETERS]
            -f "file path"
        [OPTIONAL]
            -c "Number of character for the password, default 2048"
            -p "Set password, only alphabetics letters"
#Issues

* The password have be only letters
* When you have to pass parameters in the encode script ***you must use the quotes mark "***
 * Example:
 
    Parametres
    
    
        ./home/user/passGenerator.rdc
	        [Command line]
	         -c "Number of character for the password" 
	        [Optional]
	         -l "Number of lower Alphabetic"
	         -u  "Number of upper Alphabetic"
	         -n "Number of number"
	         -s "Number of special chart"
        [user@host ~]$ /home/user/passGenerator.rdc -c 12
        You don't enter a number
        [user@host ~]$ /home/user/passGenerator.rdc "-c 12"
        8B6-_lXXXXX

                                                                                                                                                                                                                  
### RDCARRERA
Tap into [Linkedin](https://es.linkedin.com/in/rdcarrera) to see my profesional profile.
