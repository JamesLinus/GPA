//==============================================================================
// Copyright (c) 2010-2017 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief  PublicCounterDefinitions for GLGFX9
//==============================================================================

#include "PublicCounterDefsGLGfx9.h"

// *** Note, this is an auto-generated file. Do not edit. Execute PublicCounterCompiler to rebuild.

void AutoDefinePublicCountersGLGfx9(GPA_PublicCounters& p)
{
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(16129);

        p.DefinePublicCounter("GPUTime", "#Timing#Time this API call took to execute on the GPU in milliseconds. Does not include time that draw calls are processed in parallel.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_MILLISECONDS, GPA_COUNTER_TYPE_API_DYNAMIC, internalCounters, "0,TS_FREQ,/,(1000),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3098);
        internalCounters.push_back(3096);

        p.DefinePublicCounter("GPUBusy", "#Timing#The percentage of time GPU was busy.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,/,(100),*,(100),min");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(15917);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("TessellatorBusy", "#Timing#The percentage of time the tessellation engine is busy.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,NUM_PRIM_PIPES,/,1,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3965);
        internalCounters.push_back(3971);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("HSBusy", "#Timing#The percentage of time the ShaderUnit has hull shader work to do.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,ifnotzero,2,/,(100),*,(100),min");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(16129);
        internalCounters.push_back(3965);
        internalCounters.push_back(3971);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("HSTime", "#Timing#Time hull shaders are busy in milliseconds.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_MILLISECONDS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),1,2,ifnotzero,3,/,(1),min,0,TS_FREQ,/,(1000),*,*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3953);
        internalCounters.push_back(3956);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("GSBusy", "#Timing#The percentage of time the ShaderUnit has geometry shader work to do.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,ifnotzero,2,/,(100),*,(100),min");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(16129);
        internalCounters.push_back(3953);
        internalCounters.push_back(3956);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("GSTime", "#Timing#Time geometry shaders are busy in milliseconds.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_MILLISECONDS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),1,2,ifnotzero,3,/,(1),min,0,TS_FREQ,/,(1000),*,*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3975);
        internalCounters.push_back(3979);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("CSBusy", "#Timing#The percentage of time the ShaderUnit has compute shader work to do.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,ifnotzero,2,/,(100),*,(100),min");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(16129);
        internalCounters.push_back(3975);
        internalCounters.push_back(3979);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("CSTime", "#Timing#Time compute shaders are busy in milliseconds.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_MILLISECONDS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),1,2,ifnotzero,3,/,(1),min,0,TS_FREQ,/,(1000),*,*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(15812);
        internalCounters.push_back(15793);
        internalCounters.push_back(15888);

        p.DefinePublicCounter("VSVerticesIn", "#VertexShader#The number of vertices processed by the VS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,1,ifnotzero,2,2,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(5277);
        internalCounters.push_back(5255);
        internalCounters.push_back(4529);
        internalCounters.push_back(4507);
        internalCounters.push_back(4517);
        internalCounters.push_back(6025);
        internalCounters.push_back(6003);
        internalCounters.push_back(6013);

        p.DefinePublicCounter("VSVALUInstCount", "#VertexShader#Average number of vector ALU instructions executed in the VS. Affected by flow control.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,/,2,3,/,4,ifnotzero,5,6,/,7,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(5281);
        internalCounters.push_back(5255);
        internalCounters.push_back(4533);
        internalCounters.push_back(4507);
        internalCounters.push_back(4517);
        internalCounters.push_back(6029);
        internalCounters.push_back(6003);
        internalCounters.push_back(6013);

        p.DefinePublicCounter("VSSALUInstCount", "#VertexShader#Average number of scalar ALU instructions executed in the VS. Affected by flow control.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,/,2,3,/,4,ifnotzero,5,6,/,7,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(5335);
        internalCounters.push_back(4587);
        internalCounters.push_back(4517);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("VSSALUBusy", "#VertexShader#The percentage of GPUTime scalar ALU instructions are being processed by the VS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,ifnotzero,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/,3,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(15897);

        p.DefinePublicCounter("HSPatches", "#HullShader#The number of patches processed by the HS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6403);
        internalCounters.push_back(6377);

        p.DefinePublicCounter("HSSALUInstCount", "#HullShader#Average number of scalar ALU instructions executed in the HS. Affected by flow control.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,/");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6457);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("HSSALUBusy", "#HullShader#The percentage of GPUTime scalar ALU instructions are being processed by the HS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/,1,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(15812);
        internalCounters.push_back(15793);
        internalCounters.push_back(15888);

        p.DefinePublicCounter("DSVerticesIn", "#DomainShader#The number of vertices processed by the DS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,1,ifnotzero,2,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(5277);
        internalCounters.push_back(5255);
        internalCounters.push_back(4529);
        internalCounters.push_back(4507);
        internalCounters.push_back(4517);
        internalCounters.push_back(6013);

        p.DefinePublicCounter("DSVALUInstCount", "#DomainShader#Average number of vector ALU instructions executed in the DS. Affected by flow control.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,/,2,3,/,4,ifnotzero,5,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(5281);
        internalCounters.push_back(5255);
        internalCounters.push_back(4533);
        internalCounters.push_back(4507);
        internalCounters.push_back(4517);
        internalCounters.push_back(6013);

        p.DefinePublicCounter("DSSALUInstCount", "#DomainShader#Average number of scalar ALU instructions executed in the DS. Affected by flow control.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,/,2,3,/,4,ifnotzero,5,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(5335);
        internalCounters.push_back(4587);
        internalCounters.push_back(3098);
        internalCounters.push_back(4517);
        internalCounters.push_back(6013);

        p.DefinePublicCounter("DSSALUBusy", "#DomainShader#The percentage of GPUTime scalar ALU instructions are being processed by the DS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,3,ifnotzero,4,ifnotzero,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/,2,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(15801);

        p.DefinePublicCounter("GSPrimsIn", "#GeometryShader#The number of primitives passed into the GS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(15812);
        internalCounters.push_back(15793);

        p.DefinePublicCounter("GSVerticesOut", "#GeometryShader#The number of vertices output by the GS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(4903);
        internalCounters.push_back(4881);

        p.DefinePublicCounter("GSVALUInstCount", "#GeometryShader#Average number of vector ALU instructions executed in the GS. Affected by flow control.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,/");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(4907);
        internalCounters.push_back(4881);

        p.DefinePublicCounter("GSSALUInstCount", "#GeometryShader#Average number of scalar ALU instructions executed in the GS. Affected by flow control.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,/");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(4961);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("GSSALUBusy", "#GeometryShader#The percentage of GPUTime scalar ALU instructions are being processed by the GS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/,1,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3255);
        internalCounters.push_back(3259);
        internalCounters.push_back(3211);
        internalCounters.push_back(3223);
        internalCounters.push_back(3212);
        internalCounters.push_back(3224);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("PrimitiveAssemblyBusy", "#Timing#The percentage of GPUTime that primitive assembly (clipping and culling) is busy. High values may be caused by having many small primitives; mid to low values may indicate pixel shader or output buffer bottleneck.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,-,2,3,+,4,+,5,(2),*,+,SU_CLOCKS_PRIM,*,-,NUM_PRIM_PIPES,/,(0),max,6,/,(100),*,(100),min");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3158);

        p.DefinePublicCounter("PrimitivesIn", "#PrimitiveAssembly#The number of primitives received by the hardware. This includes primitives generated by tessellation.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3164);
        internalCounters.push_back(3204);
        internalCounters.push_back(3205);
        internalCounters.push_back(3206);
        internalCounters.push_back(3207);

        p.DefinePublicCounter("CulledPrims", "#PrimitiveAssembly#The number of culled primitives. Typical reasons include scissor, the primitive having zero area, and back or front face culling.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,+,2,+,3,+,4,+");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3171);

        p.DefinePublicCounter("ClippedPrims", "#PrimitiveAssembly#The number of primitives that required one or more clipping operations due to intersecting the view volume or user clip planes.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3259);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("PAStalledOnRasterizer", "#PrimitiveAssembly#Percentage of GPUTime that primitive assembly waits for rasterization to be ready to accept data. This roughly indicates for what percentage of time the pipeline is bottlenecked by pixel operations.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,NUM_PRIM_PIPES,/,1,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(7133);
        internalCounters.push_back(7138);
        internalCounters.push_back(7143);
        internalCounters.push_back(7148);

        p.DefinePublicCounter("PSPixelsOut", "#PixelShader#Pixels exported from shader to colour buffers. Does not include killed or alpha tested pixels; if there are multiple rendertargets, each rendertarget receives one export, so this will be 2 for 1 pixel written to two RTs.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,sum4");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(7135);
        internalCounters.push_back(7140);
        internalCounters.push_back(7145);
        internalCounters.push_back(7150);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("PSExportStalls", "#PixelShader#Pixel shader output stalls. Percentage of GPUBusy. Should be zero for PS or further upstream limited cases; if not zero, indicates a bottleneck in late Z testing or in the colour buffer.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,max,2,max,3,max,4,/,NUM_SHADER_ENGINES,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(5651);
        internalCounters.push_back(5629);

        p.DefinePublicCounter("PSVALUInstCount", "#PixelShader#Average number of vector ALU instructions executed in the PS. Affected by flow control.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,/");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(5655);
        internalCounters.push_back(5629);

        p.DefinePublicCounter("PSSALUInstCount", "#PixelShader#Average number of scalar ALU instructions executed in the PS. Affected by flow control.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,/");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(5709);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("PSSALUBusy", "#PixelShader#The percentage of GPUTime scalar ALU instructions are being processed by the PS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/,1,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3976);

        p.DefinePublicCounter("CSThreadGroups", "#ComputeShader#Total number of thread groups.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6751);

        p.DefinePublicCounter("CSWavefronts", "#ComputeShader#The total number of wavefronts used for the CS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6761);

        p.DefinePublicCounter("CSThreads", "#ComputeShader#The number of CS threads processed by the hardware.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6773);
        internalCounters.push_back(6751);

        p.DefinePublicCounter("CSVALUInsts", "#ComputeShader#The average number of vector ALU instructions executed per work-item (affected by flow control).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,/,1,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6777);
        internalCounters.push_back(6751);

        p.DefinePublicCounter("CSSALUInsts", "#ComputeShader#The average number of scalar ALU instructions executed per work-item (affected by flow control).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,/,1,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6775);
        internalCounters.push_back(7430);
        internalCounters.push_back(7549);
        internalCounters.push_back(7668);
        internalCounters.push_back(7787);
        internalCounters.push_back(7906);
        internalCounters.push_back(8025);
        internalCounters.push_back(8144);
        internalCounters.push_back(8263);
        internalCounters.push_back(8382);
        internalCounters.push_back(8501);
        internalCounters.push_back(8620);
        internalCounters.push_back(8739);
        internalCounters.push_back(8858);
        internalCounters.push_back(8977);
        internalCounters.push_back(9096);
        internalCounters.push_back(9215);
        internalCounters.push_back(6751);

        p.DefinePublicCounter("CSVFetchInsts", "#ComputeShader#The average number of vector fetch instructions from the video memory executed per work-item (affected by flow control).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,sum16,-,17,/,17,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6778);
        internalCounters.push_back(6751);

        p.DefinePublicCounter("CSSFetchInsts", "#ComputeShader#The average number of scalar fetch instructions from the video memory executed per work-item (affected by flow control).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,/,1,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6774);
        internalCounters.push_back(7431);
        internalCounters.push_back(7550);
        internalCounters.push_back(7669);
        internalCounters.push_back(7788);
        internalCounters.push_back(7907);
        internalCounters.push_back(8026);
        internalCounters.push_back(8145);
        internalCounters.push_back(8264);
        internalCounters.push_back(8383);
        internalCounters.push_back(8502);
        internalCounters.push_back(8621);
        internalCounters.push_back(8740);
        internalCounters.push_back(8859);
        internalCounters.push_back(8978);
        internalCounters.push_back(9097);
        internalCounters.push_back(9216);
        internalCounters.push_back(6751);

        p.DefinePublicCounter("CSVWriteInsts", "#ComputeShader#The average number of vector write instructions to the video memory executed per work-item (affected by flow control).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,sum16,-,17,/,17,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6781);
        internalCounters.push_back(6780);
        internalCounters.push_back(6751);

        p.DefinePublicCounter("CSFlatVMemInsts", "#ComputeShader#The average number of FLAT instructions that read from or write to the video memory executed per work item (affected by flow control). Includes FLAT instructions that read from or write to scratch.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,-,2,/,2,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6831);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("CSSALUBusy", "#ComputeShader#The percentage of GPUTime scalar ALU instructions are processed. Value range: 0% (bad) to 100% (optimal).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/,1,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(7344);
        internalCounters.push_back(7463);
        internalCounters.push_back(7582);
        internalCounters.push_back(7701);
        internalCounters.push_back(7820);
        internalCounters.push_back(7939);
        internalCounters.push_back(8058);
        internalCounters.push_back(8177);
        internalCounters.push_back(8296);
        internalCounters.push_back(8415);
        internalCounters.push_back(8534);
        internalCounters.push_back(8653);
        internalCounters.push_back(8772);
        internalCounters.push_back(8891);
        internalCounters.push_back(9010);
        internalCounters.push_back(9129);
        internalCounters.push_back(3098);
        internalCounters.push_back(3976);

        p.DefinePublicCounter("CSMemUnitBusy", "#ComputeShader#The percentage of GPUTime the memory unit is active. The result includes the stall time (MemUnitStalled). This is measured with all extra fetches and writes and any cache or memory effects taken into account. Value range: 0% to 100% (fetch-bound).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,16,/,NUM_SHADER_ENGINES,/,(100),*,17,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(14317);
        internalCounters.push_back(14402);
        internalCounters.push_back(14487);
        internalCounters.push_back(14572);
        internalCounters.push_back(14657);
        internalCounters.push_back(14742);
        internalCounters.push_back(14827);
        internalCounters.push_back(14912);
        internalCounters.push_back(14997);
        internalCounters.push_back(15082);
        internalCounters.push_back(15167);
        internalCounters.push_back(15252);
        internalCounters.push_back(15337);
        internalCounters.push_back(15422);
        internalCounters.push_back(15507);
        internalCounters.push_back(15592);
        internalCounters.push_back(3098);
        internalCounters.push_back(3976);

        p.DefinePublicCounter("CSMemUnitStalled", "#ComputeShader#The percentage of GPUTime the memory unit is stalled. Try reducing the number or size of fetches and writes if possible. Value range: 0% (optimal) to 100% (bad).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,16,/,NUM_SHADER_ENGINES,/,(100),*,17,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(9323);
        internalCounters.push_back(9579);
        internalCounters.push_back(9835);
        internalCounters.push_back(10091);
        internalCounters.push_back(10347);
        internalCounters.push_back(10603);
        internalCounters.push_back(10859);
        internalCounters.push_back(11115);
        internalCounters.push_back(11371);
        internalCounters.push_back(11627);
        internalCounters.push_back(11883);
        internalCounters.push_back(12139);
        internalCounters.push_back(12395);
        internalCounters.push_back(12651);
        internalCounters.push_back(12907);
        internalCounters.push_back(13163);
        internalCounters.push_back(9325);
        internalCounters.push_back(9581);
        internalCounters.push_back(9837);
        internalCounters.push_back(10093);
        internalCounters.push_back(10349);
        internalCounters.push_back(10605);
        internalCounters.push_back(10861);
        internalCounters.push_back(11117);
        internalCounters.push_back(11373);
        internalCounters.push_back(11629);
        internalCounters.push_back(11885);
        internalCounters.push_back(12141);
        internalCounters.push_back(12397);
        internalCounters.push_back(12653);
        internalCounters.push_back(12909);
        internalCounters.push_back(13165);
        internalCounters.push_back(3976);

        p.DefinePublicCounter("CSCacheHit", "#ComputeShader#The percentage of fetch, write, atomic, and other instructions that hit the data cache. Value range: 0% (no hit) to 100% (optimal).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,+,/,(100),*,32,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6782);
        internalCounters.push_back(6751);

        p.DefinePublicCounter("CSGDSInsts", "#ComputeShader#The average number of GDS read or GDS write instructions executed per work item (affected by flow control).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,/,1,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6781);
        internalCounters.push_back(6779);
        internalCounters.push_back(6751);

        p.DefinePublicCounter("CSLDSInsts", "#ComputeShader#The average number of LDS read/write instructions executed per work-item (affected by flow control).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,-,2,/,2,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6780);
        internalCounters.push_back(6751);

        p.DefinePublicCounter("CSFlatLDSInsts", "#ComputeShader#The average number of FLAT instructions that read from or write to LDS executed per work item (affected by flow control).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,/,1,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(4192);
        internalCounters.push_back(4133);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("CSALUStalledByLDS", "#ComputeShader#The percentage of GPUTime ALU units are stalled by the LDS input queue being full or the output queue being not ready. If there are LDS bank conflicts, reduce them. Otherwise, try reducing the number of LDS accesses if possible. Value range: 0% (optimal) to 100% (bad).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,/,2,/,NUM_SHADER_ENGINES,/,(100),*,1,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6840);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("CSLDSBankConflict", "#ComputeShader#The percentage of GPUTime LDS is stalled by bank conflicts. Value range: 0% (optimal) to 100% (bad).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,/,NUM_SIMDS,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(7344);
        internalCounters.push_back(7463);
        internalCounters.push_back(7582);
        internalCounters.push_back(7701);
        internalCounters.push_back(7820);
        internalCounters.push_back(7939);
        internalCounters.push_back(8058);
        internalCounters.push_back(8177);
        internalCounters.push_back(8296);
        internalCounters.push_back(8415);
        internalCounters.push_back(8534);
        internalCounters.push_back(8653);
        internalCounters.push_back(8772);
        internalCounters.push_back(8891);
        internalCounters.push_back(9010);
        internalCounters.push_back(9129);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("TexUnitBusy", "#Timing#The percentage of GPUTime the texture unit is active. This is measured with all extra fetches and any cache or memory effects taken into account.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,16,/,NUM_SHADER_ENGINES,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(7398);
        internalCounters.push_back(7517);
        internalCounters.push_back(7636);
        internalCounters.push_back(7755);
        internalCounters.push_back(7874);
        internalCounters.push_back(7993);
        internalCounters.push_back(8112);
        internalCounters.push_back(8231);
        internalCounters.push_back(8350);
        internalCounters.push_back(8469);
        internalCounters.push_back(8588);
        internalCounters.push_back(8707);
        internalCounters.push_back(8826);
        internalCounters.push_back(8945);
        internalCounters.push_back(9064);
        internalCounters.push_back(9183);
        internalCounters.push_back(7397);
        internalCounters.push_back(7516);
        internalCounters.push_back(7635);
        internalCounters.push_back(7754);
        internalCounters.push_back(7873);
        internalCounters.push_back(7992);
        internalCounters.push_back(8111);
        internalCounters.push_back(8230);
        internalCounters.push_back(8349);
        internalCounters.push_back(8468);
        internalCounters.push_back(8587);
        internalCounters.push_back(8706);
        internalCounters.push_back(8825);
        internalCounters.push_back(8944);
        internalCounters.push_back(9063);
        internalCounters.push_back(9182);

        p.DefinePublicCounter("TexTriFilteringPct", "#TextureUnit#Percentage of pixels that received trilinear filtering. Note that not all pixels for which trilinear filtering is enabled will receive it (e.g. if the texture is magnified).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,+,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(7400);
        internalCounters.push_back(7519);
        internalCounters.push_back(7638);
        internalCounters.push_back(7757);
        internalCounters.push_back(7876);
        internalCounters.push_back(7995);
        internalCounters.push_back(8114);
        internalCounters.push_back(8233);
        internalCounters.push_back(8352);
        internalCounters.push_back(8471);
        internalCounters.push_back(8590);
        internalCounters.push_back(8709);
        internalCounters.push_back(8828);
        internalCounters.push_back(8947);
        internalCounters.push_back(9066);
        internalCounters.push_back(9185);
        internalCounters.push_back(7399);
        internalCounters.push_back(7518);
        internalCounters.push_back(7637);
        internalCounters.push_back(7756);
        internalCounters.push_back(7875);
        internalCounters.push_back(7994);
        internalCounters.push_back(8113);
        internalCounters.push_back(8232);
        internalCounters.push_back(8351);
        internalCounters.push_back(8470);
        internalCounters.push_back(8589);
        internalCounters.push_back(8708);
        internalCounters.push_back(8827);
        internalCounters.push_back(8946);
        internalCounters.push_back(9065);
        internalCounters.push_back(9184);

        p.DefinePublicCounter("TexVolFilteringPct", "#TextureUnit#Percentage of pixels that received volume filtering.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,+,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(7418);
        internalCounters.push_back(7537);
        internalCounters.push_back(7656);
        internalCounters.push_back(7775);
        internalCounters.push_back(7894);
        internalCounters.push_back(8013);
        internalCounters.push_back(8132);
        internalCounters.push_back(8251);
        internalCounters.push_back(8370);
        internalCounters.push_back(8489);
        internalCounters.push_back(8608);
        internalCounters.push_back(8727);
        internalCounters.push_back(8846);
        internalCounters.push_back(8965);
        internalCounters.push_back(9084);
        internalCounters.push_back(9203);
        internalCounters.push_back(7419);
        internalCounters.push_back(7538);
        internalCounters.push_back(7657);
        internalCounters.push_back(7776);
        internalCounters.push_back(7895);
        internalCounters.push_back(8014);
        internalCounters.push_back(8133);
        internalCounters.push_back(8252);
        internalCounters.push_back(8371);
        internalCounters.push_back(8490);
        internalCounters.push_back(8609);
        internalCounters.push_back(8728);
        internalCounters.push_back(8847);
        internalCounters.push_back(8966);
        internalCounters.push_back(9085);
        internalCounters.push_back(9204);
        internalCounters.push_back(7420);
        internalCounters.push_back(7539);
        internalCounters.push_back(7658);
        internalCounters.push_back(7777);
        internalCounters.push_back(7896);
        internalCounters.push_back(8015);
        internalCounters.push_back(8134);
        internalCounters.push_back(8253);
        internalCounters.push_back(8372);
        internalCounters.push_back(8491);
        internalCounters.push_back(8610);
        internalCounters.push_back(8729);
        internalCounters.push_back(8848);
        internalCounters.push_back(8967);
        internalCounters.push_back(9086);
        internalCounters.push_back(9205);
        internalCounters.push_back(7421);
        internalCounters.push_back(7540);
        internalCounters.push_back(7659);
        internalCounters.push_back(7778);
        internalCounters.push_back(7897);
        internalCounters.push_back(8016);
        internalCounters.push_back(8135);
        internalCounters.push_back(8254);
        internalCounters.push_back(8373);
        internalCounters.push_back(8492);
        internalCounters.push_back(8611);
        internalCounters.push_back(8730);
        internalCounters.push_back(8849);
        internalCounters.push_back(8968);
        internalCounters.push_back(9087);
        internalCounters.push_back(9206);
        internalCounters.push_back(7422);
        internalCounters.push_back(7541);
        internalCounters.push_back(7660);
        internalCounters.push_back(7779);
        internalCounters.push_back(7898);
        internalCounters.push_back(8017);
        internalCounters.push_back(8136);
        internalCounters.push_back(8255);
        internalCounters.push_back(8374);
        internalCounters.push_back(8493);
        internalCounters.push_back(8612);
        internalCounters.push_back(8731);
        internalCounters.push_back(8850);
        internalCounters.push_back(8969);
        internalCounters.push_back(9088);
        internalCounters.push_back(9207);
        internalCounters.push_back(7423);
        internalCounters.push_back(7542);
        internalCounters.push_back(7661);
        internalCounters.push_back(7780);
        internalCounters.push_back(7899);
        internalCounters.push_back(8018);
        internalCounters.push_back(8137);
        internalCounters.push_back(8256);
        internalCounters.push_back(8375);
        internalCounters.push_back(8494);
        internalCounters.push_back(8613);
        internalCounters.push_back(8732);
        internalCounters.push_back(8851);
        internalCounters.push_back(8970);
        internalCounters.push_back(9089);
        internalCounters.push_back(9208);
        internalCounters.push_back(7424);
        internalCounters.push_back(7543);
        internalCounters.push_back(7662);
        internalCounters.push_back(7781);
        internalCounters.push_back(7900);
        internalCounters.push_back(8019);
        internalCounters.push_back(8138);
        internalCounters.push_back(8257);
        internalCounters.push_back(8376);
        internalCounters.push_back(8495);
        internalCounters.push_back(8614);
        internalCounters.push_back(8733);
        internalCounters.push_back(8852);
        internalCounters.push_back(8971);
        internalCounters.push_back(9090);
        internalCounters.push_back(9209);
        internalCounters.push_back(7425);
        internalCounters.push_back(7544);
        internalCounters.push_back(7663);
        internalCounters.push_back(7782);
        internalCounters.push_back(7901);
        internalCounters.push_back(8020);
        internalCounters.push_back(8139);
        internalCounters.push_back(8258);
        internalCounters.push_back(8377);
        internalCounters.push_back(8496);
        internalCounters.push_back(8615);
        internalCounters.push_back(8734);
        internalCounters.push_back(8853);
        internalCounters.push_back(8972);
        internalCounters.push_back(9091);
        internalCounters.push_back(9210);
        internalCounters.push_back(7426);
        internalCounters.push_back(7545);
        internalCounters.push_back(7664);
        internalCounters.push_back(7783);
        internalCounters.push_back(7902);
        internalCounters.push_back(8021);
        internalCounters.push_back(8140);
        internalCounters.push_back(8259);
        internalCounters.push_back(8378);
        internalCounters.push_back(8497);
        internalCounters.push_back(8616);
        internalCounters.push_back(8735);
        internalCounters.push_back(8854);
        internalCounters.push_back(8973);
        internalCounters.push_back(9092);
        internalCounters.push_back(9211);

        p.DefinePublicCounter("TexAveAnisotropy", "#TextureUnit#The average degree of anisotropy applied. A number between 1 and 16. The anisotropic filtering algorithm only applies samples where they are required (e.g. there will be no extra anisotropic samples if the view vector is perpendicular to the surface) so this can be much lower than the requested anisotropy.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(2),16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,*,+,(4),32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,sum16,*,+,(6),48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum16,*,+,(8),64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,sum16,*,+,(10),80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,sum16,*,+,(12),96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,sum16,*,+,(14),112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,sum16,*,+,(16),128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,sum16,*,+,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,+,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,sum16,+,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum16,+,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,sum16,+,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,sum16,+,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,sum16,+,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,sum16,+,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,sum16,+,/");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(1928);
        internalCounters.push_back(2256);
        internalCounters.push_back(2584);
        internalCounters.push_back(2912);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("DepthStencilTestBusy", "#Timing#Percentage of time GPU spent performing depth and stencil tests relative to GPUBusy.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,max,2,max,3,max,4,/,NUM_SHADER_ENGINES,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(1799);
        internalCounters.push_back(2127);
        internalCounters.push_back(2455);
        internalCounters.push_back(2783);
        internalCounters.push_back(1788);
        internalCounters.push_back(2116);
        internalCounters.push_back(2444);
        internalCounters.push_back(2772);

        p.DefinePublicCounter("HiZTilesAccepted", "#DepthAndStencil#Percentage of tiles accepted by HiZ and will be rendered to the depth or color buffers.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,sum4,4,5,6,7,sum4,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(1788);
        internalCounters.push_back(2116);
        internalCounters.push_back(2444);
        internalCounters.push_back(2772);
        internalCounters.push_back(1812);
        internalCounters.push_back(2140);
        internalCounters.push_back(2468);
        internalCounters.push_back(2796);

        p.DefinePublicCounter("PreZTilesDetailCulled", "#DepthAndStencil#Percentage of tiles rejected because the associated prim had no contributing area.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "4,5,6,7,sum4,0,1,2,3,sum4,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3601);
        internalCounters.push_back(3602);
        internalCounters.push_back(3603);
        internalCounters.push_back(3604);
        internalCounters.push_back(3677);
        internalCounters.push_back(3678);
        internalCounters.push_back(3679);
        internalCounters.push_back(3680);

        p.DefinePublicCounter("HiZQuadsCulled", "#DepthAndStencil#Percentage of quads that did not have to continue on in the pipeline after HiZ. They may be written directly to the depth buffer, or culled completely. Consistently low values here may suggest that the Z-range is not being fully utilized.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,+,2,+,3,+,4,5,+,6,+,7,+,-,0,1,+,2,+,3,+,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3601);
        internalCounters.push_back(3602);
        internalCounters.push_back(3603);
        internalCounters.push_back(3604);
        internalCounters.push_back(3701);
        internalCounters.push_back(3677);
        internalCounters.push_back(3678);
        internalCounters.push_back(3679);
        internalCounters.push_back(3680);

        p.DefinePublicCounter("PreZQuadsCulled", "#DepthAndStencil#Percentage of quads rejected based on the detailZ and earlyZ tests.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "5,6,+,7,+,8,+,4,-,0,1,+,2,+,3,+,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3701);
        internalCounters.push_back(3601);
        internalCounters.push_back(3602);
        internalCounters.push_back(3603);
        internalCounters.push_back(3604);

        p.DefinePublicCounter("PostZQuads", "#DepthAndStencil#Percentage of quads for which the pixel shader will run and may be postZ tested.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,+,3,+,4,+,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(1961);
        internalCounters.push_back(2289);
        internalCounters.push_back(2617);
        internalCounters.push_back(2945);

        p.DefinePublicCounter("PreZSamplesPassing", "#DepthAndStencil#Number of samples tested for Z before shading and passed.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,sum4");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(1963);
        internalCounters.push_back(2291);
        internalCounters.push_back(2619);
        internalCounters.push_back(2947);

        p.DefinePublicCounter("PreZSamplesFailingS", "#DepthAndStencil#Number of samples tested for Z before shading and failed stencil test.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,sum4");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(1962);
        internalCounters.push_back(2290);
        internalCounters.push_back(2618);
        internalCounters.push_back(2946);

        p.DefinePublicCounter("PreZSamplesFailingZ", "#DepthAndStencil#Number of samples tested for Z before shading and failed Z test.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,sum4");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(1958);
        internalCounters.push_back(2286);
        internalCounters.push_back(2614);
        internalCounters.push_back(2942);

        p.DefinePublicCounter("PostZSamplesPassing", "#DepthAndStencil#Number of samples tested for Z after shading and passed.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,sum4");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(1960);
        internalCounters.push_back(2288);
        internalCounters.push_back(2616);
        internalCounters.push_back(2944);

        p.DefinePublicCounter("PostZSamplesFailingS", "#DepthAndStencil#Number of samples tested for Z after shading and failed stencil test.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,sum4");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(1959);
        internalCounters.push_back(2287);
        internalCounters.push_back(2615);
        internalCounters.push_back(2943);

        p.DefinePublicCounter("PostZSamplesFailingZ", "#DepthAndStencil#Number of samples tested for Z after shading and failed Z test.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,sum4");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(1830);
        internalCounters.push_back(2158);
        internalCounters.push_back(2486);
        internalCounters.push_back(2814);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("ZUnitStalled", "#DepthAndStencil#The percentage of GPUTime the depth buffer spends waiting for the color buffer to be ready to accept data. High figures here indicate a bottleneck in color buffer operations.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,max,2,max,3,max,4,/,NUM_SHADER_ENGINES,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(128);
        internalCounters.push_back(566);
        internalCounters.push_back(1004);
        internalCounters.push_back(1442);

        p.DefinePublicCounter("CBMemRead", "#ColorBuffer#Number of bytes read from the color buffer.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_BYTES, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,sum4,(32),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(118);
        internalCounters.push_back(556);
        internalCounters.push_back(994);
        internalCounters.push_back(1432);

        p.DefinePublicCounter("CBMemWritten", "#ColorBuffer#Number of bytes written to the color buffer.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_BYTES, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,sum4,(32),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(162);
        internalCounters.push_back(600);
        internalCounters.push_back(1038);
        internalCounters.push_back(1476);
        internalCounters.push_back(7);
        internalCounters.push_back(445);
        internalCounters.push_back(883);
        internalCounters.push_back(1321);

        p.DefinePublicCounter("CBSlowPixelPct", "#ColorBuffer#Percentage of pixels written to the color buffer using a half-rate or quarter-rate format.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,sum4,4,5,6,7,sum4,/,(100),*,(100),min");
    }
}

