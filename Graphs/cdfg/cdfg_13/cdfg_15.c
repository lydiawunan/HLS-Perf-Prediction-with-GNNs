#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 790243690
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned short p)
{
  int v_11;
  double v_9;
  unsigned long v_7;
  long long v_5;
  unsigned long v;
  unsigned long long result;
  v_9 = (double)p;
  v_7 = (unsigned long)p;
  v_5 = -720976726LL;
  v = (unsigned long)p;
  result = 18446744073604530653ULL;
  v_11 = -6838;
  while ((- (result / (unsigned long long)(v + 816UL)) | (unsigned long long)(
          (long long)p * (39029LL + v_5))) <= (- result / (unsigned long long)(
                                               ! v_7 + 587UL)) * ((unsigned long long)(
                                                                  (double)p / (
                                                                  v_9 + 136.)) % 18446744073315414838ULL)) {
    v = v_11 + 43940;
    v_11 = 0;
    v_9 = (double)((long long)(- (- p)) - ! (- v_5));
    v_7 = v_7;
  }
  while_0_break: ;
  return result;
}


