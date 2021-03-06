{
//=========Macro generated from canvas: canv_TP_neg_A_cent4_MS/canv_TP_neg_A_cent4_MS
//=========  (Mon Aug 25 21:09:27 2014) by ROOT version5.34/19
   TCanvas *canv_TP_neg_A_cent4_MS = new TCanvas("canv_TP_neg_A_cent4_MS", "canv_TP_neg_A_cent4_MS",0,0,700,500);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canv_TP_neg_A_cent4_MS->Range(0,0,1,1);
   canv_TP_neg_A_cent4_MS->SetFillColor(0);
   canv_TP_neg_A_cent4_MS->SetBorderMode(0);
   canv_TP_neg_A_cent4_MS->SetBorderSize(2);
   canv_TP_neg_A_cent4_MS->SetTickx(1);
   canv_TP_neg_A_cent4_MS->SetTicky(1);
   canv_TP_neg_A_cent4_MS->SetLeftMargin(0.16);
   canv_TP_neg_A_cent4_MS->SetRightMargin(0.05);
   canv_TP_neg_A_cent4_MS->SetTopMargin(0.05);
   canv_TP_neg_A_cent4_MS->SetBottomMargin(0.16);
   canv_TP_neg_A_cent4_MS->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: c_1
   TPad *c_1 = new TPad("c_1", "c_1",0,0.008474576,1,0.9915254);
   c_1->Draw();
   c_1->cd();
   c_1->Range(-3.5,-2446.54,2.827273,3258.188);
   c_1->SetFillColor(0);
   c_1->SetBorderMode(0);
   c_1->SetBorderSize(2);
   c_1->SetTickx(1);
   c_1->SetTicky(1);
   c_1->SetLeftMargin(0.158046);
   c_1->SetRightMargin(0.05172414);
   c_1->SetTopMargin(0.04525862);
   c_1->SetBottomMargin(0.4288793);
   c_1->SetFrameBorderMode(0);
   Double_t xAxis57[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1D *data_A_MS_hNegEff_pt0_cent4_total__57 = new TH1D("data_A_MS_hNegEff_pt0_cent4_total__57","mu^{-},eff,all eta (total)",11, xAxis57);
   data_A_MS_hNegEff_pt0_cent4_total__57->SetBinContent(1,13);
   data_A_MS_hNegEff_pt0_cent4_total__57->SetBinContent(2,22);
   data_A_MS_hNegEff_pt0_cent4_total__57->SetBinContent(3,24);
   data_A_MS_hNegEff_pt0_cent4_total__57->SetBinContent(4,19);
   data_A_MS_hNegEff_pt0_cent4_total__57->SetBinContent(5,32);
   data_A_MS_hNegEff_pt0_cent4_total__57->SetBinContent(6,9);
   data_A_MS_hNegEff_pt0_cent4_total__57->SetBinContent(7,25);
   data_A_MS_hNegEff_pt0_cent4_total__57->SetBinContent(8,16);
   data_A_MS_hNegEff_pt0_cent4_total__57->SetBinContent(9,27);
   data_A_MS_hNegEff_pt0_cent4_total__57->SetBinContent(10,19);
   data_A_MS_hNegEff_pt0_cent4_total__57->SetBinContent(11,6);
   data_A_MS_hNegEff_pt0_cent4_total__57->SetMinimum(0.1);
   data_A_MS_hNegEff_pt0_cent4_total__57->SetMaximum(37);
   data_A_MS_hNegEff_pt0_cent4_total__57->SetEntries(212);
   data_A_MS_hNegEff_pt0_cent4_total__57->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   data_A_MS_hNegEff_pt0_cent4_total__57->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   data_A_MS_hNegEff_pt0_cent4_total__57->SetLineColor(ci);
   data_A_MS_hNegEff_pt0_cent4_total__57->GetXaxis()->SetTitle("#eta_{lab}^{#mu}");
   data_A_MS_hNegEff_pt0_cent4_total__57->GetXaxis()->SetLabelFont(42);
   data_A_MS_hNegEff_pt0_cent4_total__57->GetXaxis()->SetLabelSize(0.035);
   data_A_MS_hNegEff_pt0_cent4_total__57->GetXaxis()->SetTitleSize(0.035);
   data_A_MS_hNegEff_pt0_cent4_total__57->GetXaxis()->SetTitleFont(42);
   data_A_MS_hNegEff_pt0_cent4_total__57->GetYaxis()->SetTitle("Probes");
   data_A_MS_hNegEff_pt0_cent4_total__57->GetYaxis()->SetLabelFont(42);
   data_A_MS_hNegEff_pt0_cent4_total__57->GetYaxis()->SetLabelSize(0.035);
   data_A_MS_hNegEff_pt0_cent4_total__57->GetYaxis()->SetTitleSize(0.035);
   data_A_MS_hNegEff_pt0_cent4_total__57->GetYaxis()->SetTitleFont(42);
   data_A_MS_hNegEff_pt0_cent4_total__57->GetZaxis()->SetLabelFont(42);
   data_A_MS_hNegEff_pt0_cent4_total__57->GetZaxis()->SetLabelSize(0.035);
   data_A_MS_hNegEff_pt0_cent4_total__57->GetZaxis()->SetTitleSize(0.035);
   data_A_MS_hNegEff_pt0_cent4_total__57->GetZaxis()->SetTitleFont(42);
   data_A_MS_hNegEff_pt0_cent4_total__57->Draw("hist");
   Double_t xAxis58[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1D *data_A_MS_hNegEff_pt0_cent4_passed__58 = new TH1D("data_A_MS_hNegEff_pt0_cent4_passed__58","mu^{-},eff,all eta (passed)",11, xAxis58);
   data_A_MS_hNegEff_pt0_cent4_passed__58->SetBinContent(1,11);
   data_A_MS_hNegEff_pt0_cent4_passed__58->SetBinContent(2,22);
   data_A_MS_hNegEff_pt0_cent4_passed__58->SetBinContent(3,24);
   data_A_MS_hNegEff_pt0_cent4_passed__58->SetBinContent(4,18);
   data_A_MS_hNegEff_pt0_cent4_passed__58->SetBinContent(5,31);
   data_A_MS_hNegEff_pt0_cent4_passed__58->SetBinContent(6,7);
   data_A_MS_hNegEff_pt0_cent4_passed__58->SetBinContent(7,25);
   data_A_MS_hNegEff_pt0_cent4_passed__58->SetBinContent(8,16);
   data_A_MS_hNegEff_pt0_cent4_passed__58->SetBinContent(9,25);
   data_A_MS_hNegEff_pt0_cent4_passed__58->SetBinContent(10,19);
   data_A_MS_hNegEff_pt0_cent4_passed__58->SetBinContent(11,6);
   data_A_MS_hNegEff_pt0_cent4_passed__58->SetEntries(204);
   data_A_MS_hNegEff_pt0_cent4_passed__58->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   data_A_MS_hNegEff_pt0_cent4_passed__58->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   data_A_MS_hNegEff_pt0_cent4_passed__58->SetLineColor(ci);
   data_A_MS_hNegEff_pt0_cent4_passed__58->GetXaxis()->SetLabelFont(42);
   data_A_MS_hNegEff_pt0_cent4_passed__58->GetXaxis()->SetLabelSize(0.035);
   data_A_MS_hNegEff_pt0_cent4_passed__58->GetXaxis()->SetTitleSize(0.035);
   data_A_MS_hNegEff_pt0_cent4_passed__58->GetXaxis()->SetTitleFont(42);
   data_A_MS_hNegEff_pt0_cent4_passed__58->GetYaxis()->SetLabelFont(42);
   data_A_MS_hNegEff_pt0_cent4_passed__58->GetYaxis()->SetLabelSize(0.035);
   data_A_MS_hNegEff_pt0_cent4_passed__58->GetYaxis()->SetTitleSize(0.035);
   data_A_MS_hNegEff_pt0_cent4_passed__58->GetYaxis()->SetTitleFont(42);
   data_A_MS_hNegEff_pt0_cent4_passed__58->GetZaxis()->SetLabelFont(42);
   data_A_MS_hNegEff_pt0_cent4_passed__58->GetZaxis()->SetLabelSize(0.035);
   data_A_MS_hNegEff_pt0_cent4_passed__58->GetZaxis()->SetTitleSize(0.035);
   data_A_MS_hNegEff_pt0_cent4_passed__58->GetZaxis()->SetTitleFont(42);
   data_A_MS_hNegEff_pt0_cent4_passed__58->Draw("histsame");
   Double_t xAxis59[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1D *data_A_MS_hNegEff_pt0_cent4_total__59 = new TH1D("data_A_MS_hNegEff_pt0_cent4_total__59","mu^{-},eff,all eta (total)",11, xAxis59);
   data_A_MS_hNegEff_pt0_cent4_total__59->SetBinContent(1,13);
   data_A_MS_hNegEff_pt0_cent4_total__59->SetBinContent(2,22);
   data_A_MS_hNegEff_pt0_cent4_total__59->SetBinContent(3,24);
   data_A_MS_hNegEff_pt0_cent4_total__59->SetBinContent(4,19);
   data_A_MS_hNegEff_pt0_cent4_total__59->SetBinContent(5,32);
   data_A_MS_hNegEff_pt0_cent4_total__59->SetBinContent(6,9);
   data_A_MS_hNegEff_pt0_cent4_total__59->SetBinContent(7,25);
   data_A_MS_hNegEff_pt0_cent4_total__59->SetBinContent(8,16);
   data_A_MS_hNegEff_pt0_cent4_total__59->SetBinContent(9,27);
   data_A_MS_hNegEff_pt0_cent4_total__59->SetBinContent(10,19);
   data_A_MS_hNegEff_pt0_cent4_total__59->SetBinContent(11,6);
   data_A_MS_hNegEff_pt0_cent4_total__59->SetMinimum(0.1);
   data_A_MS_hNegEff_pt0_cent4_total__59->SetMaximum(37);
   data_A_MS_hNegEff_pt0_cent4_total__59->SetEntries(212);
   data_A_MS_hNegEff_pt0_cent4_total__59->SetDirectory(0);

   ci = TColor::GetColor("#ff0000");
   data_A_MS_hNegEff_pt0_cent4_total__59->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   data_A_MS_hNegEff_pt0_cent4_total__59->SetLineColor(ci);
   data_A_MS_hNegEff_pt0_cent4_total__59->GetXaxis()->SetTitle("#eta_{lab}^{#mu}");
   data_A_MS_hNegEff_pt0_cent4_total__59->GetXaxis()->SetLabelFont(42);
   data_A_MS_hNegEff_pt0_cent4_total__59->GetXaxis()->SetLabelSize(0.035);
   data_A_MS_hNegEff_pt0_cent4_total__59->GetXaxis()->SetTitleSize(0.035);
   data_A_MS_hNegEff_pt0_cent4_total__59->GetXaxis()->SetTitleFont(42);
   data_A_MS_hNegEff_pt0_cent4_total__59->GetYaxis()->SetTitle("Probes");
   data_A_MS_hNegEff_pt0_cent4_total__59->GetYaxis()->SetLabelFont(42);
   data_A_MS_hNegEff_pt0_cent4_total__59->GetYaxis()->SetLabelSize(0.035);
   data_A_MS_hNegEff_pt0_cent4_total__59->GetYaxis()->SetTitleSize(0.035);
   data_A_MS_hNegEff_pt0_cent4_total__59->GetYaxis()->SetTitleFont(42);
   data_A_MS_hNegEff_pt0_cent4_total__59->GetZaxis()->SetLabelFont(42);
   data_A_MS_hNegEff_pt0_cent4_total__59->GetZaxis()->SetLabelSize(0.035);
   data_A_MS_hNegEff_pt0_cent4_total__59->GetZaxis()->SetTitleSize(0.035);
   data_A_MS_hNegEff_pt0_cent4_total__59->GetZaxis()->SetTitleFont(42);
   data_A_MS_hNegEff_pt0_cent4_total__59->Draw("sameaxis");
   TLatex *   tex = new TLatex(0.6221264,0.4892241,"MS(PeriodA), #mu^{-} 40-90%");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04310345);
   tex->SetLineWidth(2);
   tex->Draw();
  
// ------------>Primitives in pad: c_2
   c_2 = new TPad("c_2", "c_2",0,0.00862069,1,0.4331897);
   c_2->Draw();
   c_2->cd();
   c_2->Range(-3.5,-0.08581081,2.827273,1.112162);
   c_2->SetFillColor(0);
   c_2->SetBorderMode(0);
   c_2->SetBorderSize(2);
   c_2->SetTickx(1);
   c_2->SetTicky(1);
   c_2->SetLeftMargin(0.158046);
   c_2->SetRightMargin(0.05172414);
   c_2->SetTopMargin(0.01015228);
   c_2->SetBottomMargin(0.2385787);
   c_2->SetFrameBorderMode(0);
   Double_t xAxis60[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1F *hdummy__60 = new TH1F("hdummy__60","hdummy",11, xAxis60);
   hdummy__60->SetMinimum(0.2);
   hdummy__60->SetMaximum(1.09);
   hdummy__60->SetDirectory(0);
   hdummy__60->SetStats(0);
   hdummy__60->SetLineWidth(2);
   hdummy__60->SetMarkerStyle(20);
   hdummy__60->SetMarkerSize(1.2);
   hdummy__60->GetXaxis()->SetTitle("#eta^{#mu}");
   hdummy__60->GetXaxis()->SetLabelFont(42);
   hdummy__60->GetXaxis()->SetLabelSize(0.07);
   hdummy__60->GetXaxis()->SetTitleSize(0.1);
   hdummy__60->GetXaxis()->SetTitleOffset(0.87);
   hdummy__60->GetXaxis()->SetTitleFont(42);
   hdummy__60->GetYaxis()->SetTitle("#epsilon");
   hdummy__60->GetYaxis()->SetLabelFont(42);
   hdummy__60->GetYaxis()->SetLabelSize(0.07);
   hdummy__60->GetYaxis()->SetTitleSize(0.09);
   hdummy__60->GetYaxis()->SetTitleOffset(0.44);
   hdummy__60->GetYaxis()->SetTitleFont(42);
   hdummy__60->GetZaxis()->SetLabelFont(42);
   hdummy__60->GetZaxis()->SetLabelSize(0.05);
   hdummy__60->GetZaxis()->SetTitleSize(0.05);
   hdummy__60->GetZaxis()->SetTitleFont(42);
   hdummy__60->Draw("");
   Double_t xAxis15[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TEfficiency * data_A_MS_hNegEff_pt0_cent415 = new TEfficiency("data_A_MS_hNegEff_pt0_cent4","mu^{-},eff,all eta",11,xAxis15);
   
   data_A_MS_hNegEff_pt0_cent415->SetConfidenceLevel(0.6826895);
   data_A_MS_hNegEff_pt0_cent415->SetBetaAlpha(1);
   data_A_MS_hNegEff_pt0_cent415->SetBetaBeta(1);
   data_A_MS_hNegEff_pt0_cent415->SetWeight(0.08333333);
   data_A_MS_hNegEff_pt0_cent415->SetStatisticOption(0);
   data_A_MS_hNegEff_pt0_cent415->SetPosteriorMode(0);
   data_A_MS_hNegEff_pt0_cent415->SetShortestInterval(0);
   data_A_MS_hNegEff_pt0_cent415->SetTotalEvents(0,0);
   data_A_MS_hNegEff_pt0_cent415->SetPassedEvents(0,0);
   data_A_MS_hNegEff_pt0_cent415->SetTotalEvents(1,13);
   data_A_MS_hNegEff_pt0_cent415->SetPassedEvents(1,11);
   data_A_MS_hNegEff_pt0_cent415->SetTotalEvents(2,22);
   data_A_MS_hNegEff_pt0_cent415->SetPassedEvents(2,22);
   data_A_MS_hNegEff_pt0_cent415->SetTotalEvents(3,24);
   data_A_MS_hNegEff_pt0_cent415->SetPassedEvents(3,24);
   data_A_MS_hNegEff_pt0_cent415->SetTotalEvents(4,19);
   data_A_MS_hNegEff_pt0_cent415->SetPassedEvents(4,18);
   data_A_MS_hNegEff_pt0_cent415->SetTotalEvents(5,32);
   data_A_MS_hNegEff_pt0_cent415->SetPassedEvents(5,31);
   data_A_MS_hNegEff_pt0_cent415->SetTotalEvents(6,9);
   data_A_MS_hNegEff_pt0_cent415->SetPassedEvents(6,7);
   data_A_MS_hNegEff_pt0_cent415->SetTotalEvents(7,25);
   data_A_MS_hNegEff_pt0_cent415->SetPassedEvents(7,25);
   data_A_MS_hNegEff_pt0_cent415->SetTotalEvents(8,16);
   data_A_MS_hNegEff_pt0_cent415->SetPassedEvents(8,16);
   data_A_MS_hNegEff_pt0_cent415->SetTotalEvents(9,27);
   data_A_MS_hNegEff_pt0_cent415->SetPassedEvents(9,25);
   data_A_MS_hNegEff_pt0_cent415->SetTotalEvents(10,19);
   data_A_MS_hNegEff_pt0_cent415->SetPassedEvents(10,19);
   data_A_MS_hNegEff_pt0_cent415->SetTotalEvents(11,6);
   data_A_MS_hNegEff_pt0_cent415->SetPassedEvents(11,6);
   data_A_MS_hNegEff_pt0_cent415->SetTotalEvents(12,0);
   data_A_MS_hNegEff_pt0_cent415->SetPassedEvents(12,0);
   data_A_MS_hNegEff_pt0_cent415->SetFillColor(19);
   data_A_MS_hNegEff_pt0_cent415->Draw("pesame");
   c_2->Modified();
   c_1->cd();
   c_1->Modified();
   canv_TP_neg_A_cent4_MS->cd();
   canv_TP_neg_A_cent4_MS->Modified();
   canv_TP_neg_A_cent4_MS->cd();
   canv_TP_neg_A_cent4_MS->SetSelected(canv_TP_neg_A_cent4_MS);
}
