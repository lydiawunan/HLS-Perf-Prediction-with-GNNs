//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 582802381
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned char p[2], short p_11, unsigned short p_13,
         unsigned long long p_17)
{
  double v_15;
  unsigned long v_8;
  unsigned long v_6;
  long long v_4;
  unsigned int v;
  char result;
  v_15 = (double)p_17;
  v_8 = (unsigned long)p_13;
  v_4 = 63741LL;
  result = (char)p_17;
  v_6 = ((v_8 - (unsigned long)p[0]) << ((int)(! p_11) * (int)p_13 & 31)) - (unsigned long)(
        (double)v_4 / ((v_15 + (double)p_17) + 699.) + (double)(! p_17 - (unsigned long long)(- v_4)));
  v_4 = (long long)(! v_6 % 33793UL);
  v = (unsigned int)v_4;
  result = (char)((long long)(- (v / (unsigned int)((int)result + 717))) - v_4);
  return result;
}


