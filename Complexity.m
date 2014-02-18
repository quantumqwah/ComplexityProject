L=50;
	 latt=zeros(1,L);
	 input=0;
     
     for c=1:10000
        latt(1,1)=latt(1,1)+1;
        
        
            for i=1:L-1
         if latt(1,i)~=0
         zth=round(rand(1))+1;
         z=latt(1,i)-latt(1,i+1);
         
         if (z>zth)
         latt(1,i)=latt(1,i)-1;
         latt(1,i+1)=latt(1,i+1)+1;
         end
         end
         
  
            end
            if latt(1,L)~=0
          break;
            end;
     bar(latt)
     pause(0.01)
     end