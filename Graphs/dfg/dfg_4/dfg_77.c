//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 881784531
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned int p, char p_7, unsigned char p_9)
{
  unsigned long v_5;
  unsigned short v;
  long long result;
  result = (long long)p_9;
  v_5 = (unsigned long)((unsigned int)((int)p_7 | ((int)(! p_7) + (int)p_7)) % (
                        p + 585U));
  v = (unsigned short)(((result % (long long)(- p + 957U)) % (long long)(
                        v_5 + 484UL)) * 97LL);
  result = (long long)(! (((4162756659UL - (unsigned long)p) * (unsigned long)(
                           3867354952U % (p + 984U))) / (unsigned long)(
                          (int)v + 468)));
  return result;
}


