{
//=========Macro generated from canvas: cPosB_cent4/cPosB_cent4
//=========  (Thu Aug 14 17:54:29 2014) by ROOT version5.34/19
   TCanvas *cPosB_cent4 = new TCanvas("cPosB_cent4", "cPosB_cent4",0,0,600,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cPosB_cent4->Range(0,0,1,1);
   cPosB_cent4->SetFillColor(0);
   cPosB_cent4->SetBorderMode(0);
   cPosB_cent4->SetBorderSize(2);
   cPosB_cent4->SetTickx(1);
   cPosB_cent4->SetTicky(1);
   cPosB_cent4->SetLeftMargin(0.16);
   cPosB_cent4->SetRightMargin(0.05);
   cPosB_cent4->SetTopMargin(0.05);
   cPosB_cent4->SetBottomMargin(0.16);
   cPosB_cent4->SetFrameBorderMode(0);
   
   TH1F *hdummy = new TH1F("hdummy","hdummy",50,-2.5,2.5);
   hdummy->SetMinimum(0);
   hdummy->SetMaximum(1.1);
   hdummy->SetStats(0);
   hdummy->SetLineWidth(2);
   hdummy->SetMarkerStyle(20);
   hdummy->SetMarkerSize(1.2);
   hdummy->GetXaxis()->SetTitle("#eta_{lab}^{#mu}");
   hdummy->GetXaxis()->SetLabelFont(42);
   hdummy->GetXaxis()->SetLabelSize(0.05);
   hdummy->GetXaxis()->SetTitleSize(0.05);
   hdummy->GetXaxis()->SetTitleOffset(1.4);
   hdummy->GetXaxis()->SetTitleFont(42);
   hdummy->GetYaxis()->SetTitle("#epsilon");
   hdummy->GetYaxis()->SetLabelFont(42);
   hdummy->GetYaxis()->SetLabelSize(0.05);
   hdummy->GetYaxis()->SetTitleSize(0.05);
   hdummy->GetYaxis()->SetTitleOffset(1.4);
   hdummy->GetYaxis()->SetTitleFont(42);
   hdummy->GetZaxis()->SetLabelFont(42);
   hdummy->GetZaxis()->SetLabelSize(0.05);
   hdummy->GetZaxis()->SetTitleSize(0.05);
   hdummy->GetZaxis()->SetTitleFont(42);
   hdummy->Draw("");
   TLatex *   tex = new TLatex(0.4891954,0.2944915,"Period B, #mu^{+}, 40-90%");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.4729885,0.2372881,"p_{T}^{#mu}>25GeV, p_{T}^{#nu}>25GeV, m_{T}>40 GeV");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2068966,0.875,"ATLAS Simulation");
tex->SetNDC();
   tex->SetTextFont(72);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.6342529,0.875,"Internal");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00ff00");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#00ff00");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   grae->SetPoint(0,-2.3,0.8943092);
   grae->SetPointError(0,0.2,0.2,0.006198833,0.005890225);
   grae->SetPoint(1,-1.825,0.89325);
   grae->SetPointError(1,0.275,0.275,0.004998726,0.004800108);
   grae->SetPoint(2,-1.3,0.866408);
   grae->SetPointError(2,0.25,0.25,0.0055729,0.005381626);
   grae->SetPoint(3,-0.825,0.9303105);
   grae->SetPointError(3,0.225,0.225,0.004371336,0.004136643);
   grae->SetPoint(4,-0.35,0.9289976);
   grae->SetPointError(4,0.25,0.25,0.004073469,0.003872625);
   grae->SetPoint(5,0,0.5431434);
   grae->SetPointError(5,0.1,0.1,0.01188223,0.0118353);
   grae->SetPoint(6,0.35,0.9376764);
   grae->SetPointError(6,0.25,0.25,0.003775243,0.003577679);
   grae->SetPoint(7,0.825,0.9469433);
   grae->SetPointError(7,0.225,0.225,0.003645689,0.003429623);
   grae->SetPoint(8,1.3,0.9027794);
   grae->SetPointError(8,0.25,0.25,0.00441236,0.004241558);
   grae->SetPoint(9,1.825,0.9436418);
   grae->SetPointError(9,0.275,0.275,0.003601484,0.00340202);
   grae->SetPoint(10,2.3,0.926867);
   grae->SetPointError(10,0.2,0.2,0.005845344,0.005452686);
   grae->Draw("pe ");
   
   grae = new TGraphAsymmErrors(11);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(21);
   grae->SetMarkerSize(1.2);
   grae->SetPoint(0,-2.3,0.8921827);
   grae->SetPointError(0,0.2,0.2,0.006251631,0.005944923);
   grae->SetPoint(1,-1.825,0.8909819);
   grae->SetPointError(1,0.275,0.275,0.005038145,0.00484049);
   grae->SetPoint(2,-1.3,0.8640615);
   grae->SetPointError(2,0.25,0.25,0.005612513,0.005422535);
   grae->SetPoint(3,-0.825,0.9277019);
   grae->SetPointError(3,0.225,0.225,0.00444038,0.004207229);
   grae->SetPoint(4,-0.35,0.9253632);
   grae->SetPointError(4,0.25,0.25,0.004162182,0.003963197);
   grae->SetPoint(5,0,0.5400897);
   grae->SetPointError(5,0.1,0.1,0.0118863,0.01184287);
   grae->SetPoint(6,0.35,0.9345782);
   grae->SetPointError(6,0.25,0.25,0.003852614,0.003656432);
   grae->SetPoint(7,0.825,0.9436941);
   grae->SetPointError(7,0.225,0.225,0.003740714,0.003526384);
   grae->SetPoint(8,1.3,0.8989136);
   grae->SetPointError(8,0.25,0.25,0.00448798,0.00431898);
   grae->SetPoint(9,1.825,0.9407353);
   grae->SetPointError(9,0.275,0.275,0.003679596,0.003481502);
   grae->SetPoint(10,2.3,0.9249742);
   grae->SetPointError(10,0.2,0.2,0.005909663,0.00551898);
   grae->Draw("pe ");
   
   grae = new TGraphAsymmErrors(11);
   grae->SetName("Graph2");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(23);
   grae->SetMarkerSize(1.2);
   grae->SetPoint(0,-2.3,0.890435);
   grae->SetPointError(0,0.2,0.2,0.006294098,0.005988926);
   grae->SetPoint(1,-1.825,0.8898047);
   grae->SetPointError(1,0.275,0.275,0.005062139,0.004865194);
   grae->SetPoint(2,-1.3,0.8634282);
   grae->SetPointError(2,0.25,0.25,0.005622933,0.005433295);
   grae->SetPoint(3,-0.825,0.9277019);
   grae->SetPointError(3,0.225,0.225,0.00444038,0.004207229);
   grae->SetPoint(4,-0.35,0.9253632);
   grae->SetPointError(4,0.25,0.25,0.004162182,0.003963197);
   grae->SetPoint(5,0,0.5399348);
   grae->SetPointError(5,0.1,0.1,0.01188653,0.01184322);
   grae->SetPoint(6,0.35,0.9345172);
   grae->SetPointError(6,0.25,0.25,0.003853988,0.003657827);
   grae->SetPoint(7,0.825,0.9432257);
   grae->SetPointError(7,0.225,0.225,0.003754426,0.003540361);
   grae->SetPoint(8,1.3,0.898707);
   grae->SetPointError(8,0.25,0.25,0.004491948,0.004323043);
   grae->SetPoint(9,1.825,0.9402069);
   grae->SetPointError(9,0.275,0.275,0.003694582,0.003496783);
   grae->SetPoint(10,2.3,0.9245328);
   grae->SetPointError(10,0.2,0.2,0.005924682,0.005534469);
   grae->Draw("pe ");
   
   grae = new TGraphAsymmErrors(11);
   grae->SetName("Graph3");
   grae->SetTitle("Graph");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(33);
   grae->SetMarkerSize(1.6);
   grae->SetPoint(0,-2.3,0.7585894);
   grae->SetPointError(0,0.2,0.2,0.008432441,0.008231442);
   grae->SetPoint(1,-1.825,0.8393811);
   grae->SetPointError(1,0.275,0.275,0.005883553,0.005712899);
   grae->SetPoint(2,-1.3,0.7899991);
   grae->SetPointError(2,0.25,0.25,0.006606888,0.006455723);
   grae->SetPoint(3,-0.825,0.6783383);
   grae->SetPointError(3,0.225,0.225,0.007710354,0.007614324);
   grae->SetPoint(4,-0.35,0.7737139);
   grae->SetPointError(4,0.25,0.25,0.006453377,0.006327269);
   grae->SetPoint(5,0,0.3463578);
   grae->SetPointError(5,0.1,0.1,0.01125665,0.01142834);
   grae->SetPoint(6,0.35,0.7799495);
   grae->SetPointError(6,0.25,0.25,0.006261986,0.006136833);
   grae->SetPoint(7,0.825,0.6681628);
   grae->SetPointError(7,0.225,0.225,0.007319704,0.007240525);
   grae->SetPoint(8,1.3,0.8418258);
   grae->SetPointError(8,0.25,0.25,0.005378951,0.005234489);
   grae->SetPoint(9,1.825,0.8922909);
   grae->SetPointError(9,0.275,0.275,0.004752345,0.004577456);
   grae->SetPoint(10,2.3,0.7333917);
   grae->SetPointError(10,0.2,0.2,0.009562591,0.009353014);
   grae->Draw("pe ");
   
   TLegend *leg = new TLegend(0.225,6.948971e-310,3.524291e-14,2.588835e-312,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","#epsilon_{rec}","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph1","#epsilon_{rec}#epsilon_{sel}(isolation)","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph2","#epsilon_{rec}#epsilon_{sel}(Z veto)","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph3","#epsilon_{rec}#epsilon_{sel}#epsilon_{trig}","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   cPosB_cent4->Modified();
   cPosB_cent4->cd();
   cPosB_cent4->SetSelected(cPosB_cent4);
}
