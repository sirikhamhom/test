void Trac(){
  ConvertADC();
  if(a0 == 1 && a1 == 0 && a2 == 1){
    fd(100, 1);
  }
  else if((a0 == 0 && a1 == 0 && a2 == 1) || (a0 == 0 && a1 == 1 && a2 == 1)){
    tr(125, 1);
  }
  else if((a0 == 1 && a1 == 0 && a2 == 0) || (a0 == 1 && a1 == 1 && a2 == 0)){
    tl(125, 1);
  }
  else{
    Stop();
  }
}
