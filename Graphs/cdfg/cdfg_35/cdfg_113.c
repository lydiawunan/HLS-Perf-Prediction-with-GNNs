#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 835746917
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(short p)
{
  unsigned int v_7;
  unsigned char v_5;
  unsigned short v;
  float result;
  v_5 = (unsigned char)p;
  v = (unsigned short)5117;
  v_7 = (unsigned int)(! 78353802L);
  if ((unsigned int)((-108 + ((int)p + (int)v)) ^ (int)v_5) > v_7) result = (float)(short)32461;
  else result = (float)p;
  return result;
}


