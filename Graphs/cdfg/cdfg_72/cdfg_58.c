#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 729289721
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p, unsigned short p_4, float p_7[1][5][5],
                  unsigned short p_15)
{
  unsigned char v_17;
  long v_13;
  unsigned short v_11;
  int v_9;
  long v;
  unsigned long result;
  v_17 = (unsigned char)211;
  v_13 = (long)p_15;
  v_11 = (unsigned short)p;
  v_9 = -212347470;
  if ((unsigned long)(! (- (v_9 - (int)v_11))) != ((unsigned long)(- v_13 + (long)(! p_15)) & (unsigned long)(
                                                   4294965241U ^ (unsigned int)v_17))) 
    v = -678322885L;
  else {
    result = 4294932049UL;
    v = (long)((unsigned long)(- p_7[0][2][0]) % (~ (result - (unsigned long)8889184256.f) + 227UL));
  }
  if (v == -562201583L) result = (unsigned long)(830460548 % ((-348440614 - (int)(~ p)) + 219));
  else result = (unsigned long)((unsigned int)((int)(! p_4) / -10977) / (
                                7970U % (unsigned int)((int)((unsigned char)1705730975.2) % 101 + 226) + 672U));
  return result;
}


