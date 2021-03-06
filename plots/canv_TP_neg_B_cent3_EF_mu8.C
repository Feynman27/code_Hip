{
//=========Macro generated from canvas: canv_TP_neg_B_cent3_EF_mu8/canv_TP_neg_B_cent3_EF_mu8
//=========  (Mon Aug 25 21:09:28 2014) by ROOT version5.34/19
   TCanvas *canv_TP_neg_B_cent3_EF_mu8 = new TCanvas("canv_TP_neg_B_cent3_EF_mu8", "canv_TP_neg_B_cent3_EF_mu8",0,0,700,500);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canv_TP_neg_B_cent3_EF_mu8->Range(0,0,1,1);
   canv_TP_neg_B_cent3_EF_mu8->SetFillColor(0);
   canv_TP_neg_B_cent3_EF_mu8->SetBorderMode(0);
   canv_TP_neg_B_cent3_EF_mu8->SetBorderSize(2);
   canv_TP_neg_B_cent3_EF_mu8->SetTickx(1);
   canv_TP_neg_B_cent3_EF_mu8->SetTicky(1);
   canv_TP_neg_B_cent3_EF_mu8->SetLeftMargin(0.16);
   canv_TP_neg_B_cent3_EF_mu8->SetRightMargin(0.05);
   canv_TP_neg_B_cent3_EF_mu8->SetTopMargin(0.05);
   canv_TP_neg_B_cent3_EF_mu8->SetBottomMargin(0.16);
   canv_TP_neg_B_cent3_EF_mu8->SetFrameBorderMode(0);
  
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
   Double_t xAxis97[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1D *data_B_EF_mu8_hNegEff_pt0_cent3_total__97 = new TH1D("data_B_EF_mu8_hNegEff_pt0_cent3_total__97","mu^{-},eff,all eta (total)",11, xAxis97);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__97->SetBinContent(1,12);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__97->SetBinContent(2,11);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__97->SetBinContent(3,23);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__97->SetBinContent(4,15);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__97->SetBinContent(5,25);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__97->SetBinContent(6,6);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__97->SetBinContent(7,18);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__97->SetBinContent(8,21);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__97->SetBinContent(9,16);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__97->SetBinContent(10,21);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__97->SetBinContent(11,13);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__97->SetMinimum(0.1);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__97->SetMaximum(30);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__97->SetEntries(181);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__97->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   data_B_EF_mu8_hNegEff_pt0_cent3_total__97->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   data_B_EF_mu8_hNegEff_pt0_cent3_total__97->SetLineColor(ci);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__97->GetXaxis()->SetTitle("#eta_{lab}^{#mu}");
   data_B_EF_mu8_hNegEff_pt0_cent3_total__97->GetXaxis()->SetLabelFont(42);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__97->GetXaxis()->SetLabelSize(0.035);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__97->GetXaxis()->SetTitleSize(0.035);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__97->GetXaxis()->SetTitleFont(42);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__97->GetYaxis()->SetTitle("Probes");
   data_B_EF_mu8_hNegEff_pt0_cent3_total__97->GetYaxis()->SetLabelFont(42);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__97->GetYaxis()->SetLabelSize(0.035);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__97->GetYaxis()->SetTitleSize(0.035);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__97->GetYaxis()->SetTitleFont(42);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__97->GetZaxis()->SetLabelFont(42);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__97->GetZaxis()->SetLabelSize(0.035);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__97->GetZaxis()->SetTitleSize(0.035);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__97->GetZaxis()->SetTitleFont(42);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__97->Draw("hist");
   Double_t xAxis98[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1D *data_B_EF_mu8_hNegEff_pt0_cent3_passed__98 = new TH1D("data_B_EF_mu8_hNegEff_pt0_cent3_passed__98","mu^{-},eff,all eta (passed)",11, xAxis98);
   data_B_EF_mu8_hNegEff_pt0_cent3_passed__98->SetBinContent(1,10);
   data_B_EF_mu8_hNegEff_pt0_cent3_passed__98->SetBinContent(2,10);
   data_B_EF_mu8_hNegEff_pt0_cent3_passed__98->SetBinContent(3,18);
   data_B_EF_mu8_hNegEff_pt0_cent3_passed__98->SetBinContent(4,10);
   data_B_EF_mu8_hNegEff_pt0_cent3_passed__98->SetBinContent(5,18);
   data_B_EF_mu8_hNegEff_pt0_cent3_passed__98->SetBinContent(6,4);
   data_B_EF_mu8_hNegEff_pt0_cent3_passed__98->SetBinContent(7,13);
   data_B_EF_mu8_hNegEff_pt0_cent3_passed__98->SetBinContent(8,13);
   data_B_EF_mu8_hNegEff_pt0_cent3_passed__98->SetBinContent(9,15);
   data_B_EF_mu8_hNegEff_pt0_cent3_passed__98->SetBinContent(10,19);
   data_B_EF_mu8_hNegEff_pt0_cent3_passed__98->SetBinContent(11,9);
   data_B_EF_mu8_hNegEff_pt0_cent3_passed__98->SetEntries(139);
   data_B_EF_mu8_hNegEff_pt0_cent3_passed__98->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   data_B_EF_mu8_hNegEff_pt0_cent3_passed__98->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   data_B_EF_mu8_hNegEff_pt0_cent3_passed__98->SetLineColor(ci);
   data_B_EF_mu8_hNegEff_pt0_cent3_passed__98->GetXaxis()->SetLabelFont(42);
   data_B_EF_mu8_hNegEff_pt0_cent3_passed__98->GetXaxis()->SetLabelSize(0.035);
   data_B_EF_mu8_hNegEff_pt0_cent3_passed__98->GetXaxis()->SetTitleSize(0.035);
   data_B_EF_mu8_hNegEff_pt0_cent3_passed__98->GetXaxis()->SetTitleFont(42);
   data_B_EF_mu8_hNegEff_pt0_cent3_passed__98->GetYaxis()->SetLabelFont(42);
   data_B_EF_mu8_hNegEff_pt0_cent3_passed__98->GetYaxis()->SetLabelSize(0.035);
   data_B_EF_mu8_hNegEff_pt0_cent3_passed__98->GetYaxis()->SetTitleSize(0.035);
   data_B_EF_mu8_hNegEff_pt0_cent3_passed__98->GetYaxis()->SetTitleFont(42);
   data_B_EF_mu8_hNegEff_pt0_cent3_passed__98->GetZaxis()->SetLabelFont(42);
   data_B_EF_mu8_hNegEff_pt0_cent3_passed__98->GetZaxis()->SetLabelSize(0.035);
   data_B_EF_mu8_hNegEff_pt0_cent3_passed__98->GetZaxis()->SetTitleSize(0.035);
   data_B_EF_mu8_hNegEff_pt0_cent3_passed__98->GetZaxis()->SetTitleFont(42);
   data_B_EF_mu8_hNegEff_pt0_cent3_passed__98->Draw("histsame");
   Double_t xAxis99[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1D *data_B_EF_mu8_hNegEff_pt0_cent3_total__99 = new TH1D("data_B_EF_mu8_hNegEff_pt0_cent3_total__99","mu^{-},eff,all eta (total)",11, xAxis99);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__99->SetBinContent(1,12);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__99->SetBinContent(2,11);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__99->SetBinContent(3,23);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__99->SetBinContent(4,15);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__99->SetBinContent(5,25);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__99->SetBinContent(6,6);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__99->SetBinContent(7,18);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__99->SetBinContent(8,21);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__99->SetBinContent(9,16);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__99->SetBinContent(10,21);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__99->SetBinContent(11,13);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__99->SetMinimum(0.1);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__99->SetMaximum(30);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__99->SetEntries(181);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__99->SetDirectory(0);

   ci = TColor::GetColor("#ff0000");
   data_B_EF_mu8_hNegEff_pt0_cent3_total__99->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   data_B_EF_mu8_hNegEff_pt0_cent3_total__99->SetLineColor(ci);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__99->GetXaxis()->SetTitle("#eta_{lab}^{#mu}");
   data_B_EF_mu8_hNegEff_pt0_cent3_total__99->GetXaxis()->SetLabelFont(42);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__99->GetXaxis()->SetLabelSize(0.035);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__99->GetXaxis()->SetTitleSize(0.035);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__99->GetXaxis()->SetTitleFont(42);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__99->GetYaxis()->SetTitle("Probes");
   data_B_EF_mu8_hNegEff_pt0_cent3_total__99->GetYaxis()->SetLabelFont(42);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__99->GetYaxis()->SetLabelSize(0.035);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__99->GetYaxis()->SetTitleSize(0.035);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__99->GetYaxis()->SetTitleFont(42);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__99->GetZaxis()->SetLabelFont(42);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__99->GetZaxis()->SetLabelSize(0.035);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__99->GetZaxis()->SetTitleSize(0.035);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__99->GetZaxis()->SetTitleFont(42);
   data_B_EF_mu8_hNegEff_pt0_cent3_total__99->Draw("sameaxis");
   TLatex *   tex = new TLatex(0.6221264,0.4892241,"EF_mu8(PeriodB), #mu^{-} 20-40%");
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
   Double_t xAxis100[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1F *hdummy__100 = new TH1F("hdummy__100","hdummy",11, xAxis100);
   hdummy__100->SetMinimum(0.2);
   hdummy__100->SetMaximum(1.09);
   hdummy__100->SetDirectory(0);
   hdummy__100->SetStats(0);
   hdummy__100->SetLineWidth(2);
   hdummy__100->SetMarkerStyle(20);
   hdummy__100->SetMarkerSize(1.2);
   hdummy__100->GetXaxis()->SetTitle("#eta^{#mu}");
   hdummy__100->GetXaxis()->SetLabelFont(42);
   hdummy__100->GetXaxis()->SetLabelSize(0.07);
   hdummy__100->GetXaxis()->SetTitleSize(0.1);
   hdummy__100->GetXaxis()->SetTitleOffset(0.87);
   hdummy__100->GetXaxis()->SetTitleFont(42);
   hdummy__100->GetYaxis()->SetTitle("#epsilon");
   hdummy__100->GetYaxis()->SetLabelFont(42);
   hdummy__100->GetYaxis()->SetLabelSize(0.07);
   hdummy__100->GetYaxis()->SetTitleSize(0.09);
   hdummy__100->GetYaxis()->SetTitleOffset(0.44);
   hdummy__100->GetYaxis()->SetTitleFont(42);
   hdummy__100->GetZaxis()->SetLabelFont(42);
   hdummy__100->GetZaxis()->SetLabelSize(0.05);
   hdummy__100->GetZaxis()->SetTitleSize(0.05);
   hdummy__100->GetZaxis()->SetTitleFont(42);
   hdummy__100->Draw("");
   Double_t xAxis25[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TEfficiency * data_B_EF_mu8_hNegEff_pt0_cent325 = new TEfficiency("data_B_EF_mu8_hNegEff_pt0_cent3","mu^{-},eff,all eta",11,xAxis25);
   
   data_B_EF_mu8_hNegEff_pt0_cent325->SetConfidenceLevel(0.6826895);
   data_B_EF_mu8_hNegEff_pt0_cent325->SetBetaAlpha(1);
   data_B_EF_mu8_hNegEff_pt0_cent325->SetBetaBeta(1);
   data_B_EF_mu8_hNegEff_pt0_cent325->SetWeight(0.08333333);
   data_B_EF_mu8_hNegEff_pt0_cent325->SetStatisticOption(0);
   data_B_EF_mu8_hNegEff_pt0_cent325->SetPosteriorMode(0);
   data_B_EF_mu8_hNegEff_pt0_cent325->SetShortestInterval(0);
   data_B_EF_mu8_hNegEff_pt0_cent325->SetTotalEvents(0,0);
   data_B_EF_mu8_hNegEff_pt0_cent325->SetPassedEvents(0,0);
   data_B_EF_mu8_hNegEff_pt0_cent325->SetTotalEvents(1,12);
   data_B_EF_mu8_hNegEff_pt0_cent325->SetPassedEvents(1,10);
   data_B_EF_mu8_hNegEff_pt0_cent325->SetTotalEvents(2,11);
   data_B_EF_mu8_hNegEff_pt0_cent325->SetPassedEvents(2,10);
   data_B_EF_mu8_hNegEff_pt0_cent325->SetTotalEvents(3,23);
   data_B_EF_mu8_hNegEff_pt0_cent325->SetPassedEvents(3,18);
   data_B_EF_mu8_hNegEff_pt0_cent325->SetTotalEvents(4,15);
   data_B_EF_mu8_hNegEff_pt0_cent325->SetPassedEvents(4,10);
   data_B_EF_mu8_hNegEff_pt0_cent325->SetTotalEvents(5,25);
   data_B_EF_mu8_hNegEff_pt0_cent325->SetPassedEvents(5,18);
   data_B_EF_mu8_hNegEff_pt0_cent325->SetTotalEvents(6,6);
   data_B_EF_mu8_hNegEff_pt0_cent325->SetPassedEvents(6,4);
   data_B_EF_mu8_hNegEff_pt0_cent325->SetTotalEvents(7,18);
   data_B_EF_mu8_hNegEff_pt0_cent325->SetPassedEvents(7,13);
   data_B_EF_mu8_hNegEff_pt0_cent325->SetTotalEvents(8,21);
   data_B_EF_mu8_hNegEff_pt0_cent325->SetPassedEvents(8,13);
   data_B_EF_mu8_hNegEff_pt0_cent325->SetTotalEvents(9,16);
   data_B_EF_mu8_hNegEff_pt0_cent325->SetPassedEvents(9,15);
   data_B_EF_mu8_hNegEff_pt0_cent325->SetTotalEvents(10,21);
   data_B_EF_mu8_hNegEff_pt0_cent325->SetPassedEvents(10,19);
   data_B_EF_mu8_hNegEff_pt0_cent325->SetTotalEvents(11,13);
   data_B_EF_mu8_hNegEff_pt0_cent325->SetPassedEvents(11,9);
   data_B_EF_mu8_hNegEff_pt0_cent325->SetTotalEvents(12,0);
   data_B_EF_mu8_hNegEff_pt0_cent325->SetPassedEvents(12,0);
   data_B_EF_mu8_hNegEff_pt0_cent325->SetFillColor(19);
   data_B_EF_mu8_hNegEff_pt0_cent325->Draw("pesame");
   c_2->Modified();
   c_1->cd();
   c_1->Modified();
   canv_TP_neg_B_cent3_EF_mu8->cd();
   canv_TP_neg_B_cent3_EF_mu8->Modified();
   canv_TP_neg_B_cent3_EF_mu8->cd();
   canv_TP_neg_B_cent3_EF_mu8->SetSelected(canv_TP_neg_B_cent3_EF_mu8);
}
