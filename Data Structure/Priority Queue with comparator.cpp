bool compare(PII below, PII above) {
   if(below.first == above.first){
      return above.second < below.second;
   }

   return above.first > below.first;
}
priority_queue<PII, vector<PII>, decltype(&compare)> pq(compare); // declarartion 
