String encode(String src)
{     

    String ch ="";
    String res ="";
    int count =0;
    for(Character c: str.toCharArray()){
    if(ch.equals(c.toString())){
        count++;
    } else {
        res = res.concat(ch+(count == 0 ? "" : count));
        count = 1;
        ch =c.toString();
    }
    }
    res = res.concat(ch+""+count);
    return res;
    
}
    