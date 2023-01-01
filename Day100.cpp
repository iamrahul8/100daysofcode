int countOfSubstrings(string S, int K) {
   
        
        int res = 0;
        if(K>S.size()) return res;
        int fmap[26]={0};
        
        for(int i = 0; i<K; i++){
            fmap[S[i]-'a']++;
        }
        
        int currCh = 0;
        
        for(int itr = 0; itr<26; itr++) 
        
        if(fmap[itr]>0) currCh++;
        if(currCh==K-1) res++;
        
        
        for(int i = K; i<S.size(); i++){ 
            
            fmap[S[i-K]-'a']--;
            fmap[S[i]-'a']++;
            int currCh = 0;
            
            for(int itr = 0; itr<26; itr++) 
            if(fmap[itr]>0) currCh++;
            if(currCh==K-1) res++;
        }
        return res;
    }