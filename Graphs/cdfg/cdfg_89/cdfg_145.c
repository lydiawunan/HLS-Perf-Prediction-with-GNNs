#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 494962092
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long p, int p_7[3][3][3], double p_15)
{
  int v_13;
  unsigned int v_11;
  unsigned char v_9;
  signed char v_5;
  int v;
  unsigned char result;
  v_13 = p_7[2][2][0];
  v_11 = 3285032453U;
  v_9 = (unsigned char)p;
  v = -976;
  result = (unsigned char)p;
  v_5 = (signed char)(~ 409351532L);
  while (((unsigned long)v & 152UL * p) * (unsigned long)((unsigned int)(- v_5) + 
                                                          (unsigned int)v_5 / 101162336U) != (unsigned long)p_7[0][0][2]) {
    v_5 = v_13 & 107;
    v_13 = (int)((unsigned int)v % (- (11571U * (unsigned int)p_15) + 674U));
    result = (unsigned char)(3536210979UL % (~ ((unsigned long)v_9 - 4294950961UL) + 564UL));
    v = (int)(p % (unsigned long)(~ (- v_11) + 112U));
  }
  while_0_break: ;
  return result;
}


