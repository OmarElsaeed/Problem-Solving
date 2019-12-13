#include ​<bits/stdc++.h>
using​ ​namespace​ ​std​; 
 int​ ​main​() {
 ​int​ numOfDays ; 
 ​while​(​cin​>>numOfDays,numOfDays)     { 
 ​long​ ​long​ sum = ​0​ ;     
 ​multiset​<​int​> bills ;   
 ​while​(numOfDays--)         {    
 ​int​ numOfBills ;     
 ​cin​ >> numOfBills ;        
 ​while​(numOfBills--)             {      
 ​int​ bill ;      
 ​cin​ >> bill ;      
 bills.insert(bill);   
 }             
 ​multiset​<​int​>::iterator lowest = bills.begin();   
 ​multiset​<​int​>::iterator highest = --bills.end(); 
 
            sum+= *highest - *lowest ;    
            bills.erase(highest);   
            bills.erase(lowest); 
 
        } 
 
        ​cout​ << sum << ​endl​ ;     
        }   
        return 0; 
        }
