map<char,ll>mp;
for (ll i =0; i <n;)
{
  ll j = i;
  while (j <= n && a[j] == a[i]) ++ j;  // all element contigious max size
  mp[a[i]] = max(mp[a[i]], j - i);
  i = j;
}
