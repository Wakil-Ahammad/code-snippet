for (ll i = 1; i <= n;i++) {
      
      if(a[i]==0)
      {
         cnt++;
         ans = max(cnt,ans);    // only one element contigious max size;
      }
      else cnt=0;
  }
