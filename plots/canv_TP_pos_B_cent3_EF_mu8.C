{
//=========Macro generated from canvas: canv_TP_pos_B_cent3_EF_mu8/canv_TP_pos_B_cent3_EF_mu8
//=========  (Mon Aug 25 21:09:30 2014) by ROOT version5.34/19
   TCanvas *canv_TP_pos_B_cent3_EF_mu8 = new TCanvas("canv_TP_pos_B_cent3_EF_mu8", "canv_TP_pos_B_cent3_EF_mu8",0,0,700,500);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canv_TP_pos_B_cent3_EF_mu8->Range(0,0,1,1);
   canv_TP_pos_B_cent3_EF_mu8->SetFillColor(0);
   canv_TP_pos_B_cent3_EF_mu8->SetBorderMode(0);
   canv_TP_pos_B_cent3_EF_mu8->SetBorderSize(2);
   canv_TP_pos_B_cent3_EF_mu8->SetTickx(1);
   canv_TP_pos_B_cent3_EF_mu8->SetTicky(1);
   canv_TP_pos_B_cent3_EF_mu8->SetLeftMargin(0.16);
   canv_TP_pos_B_cent3_EF_mu8->SetRightMargin(0.05);
   canv_TP_pos_B_cent3_EF_mu8->SetTopMargin(0.05);
   canv_TP_pos_B_cent3_EF_mu8->SetBottomMargin(0.16);
   canv_TP_pos_B_cent3_EF_mu8->SetFrameBorderMode(0);
  
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
   Double_t xAxis217[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1D *data_B_EF_mu8_hPosEff_pt0_cent3_total__216 = new TH1D("data_B_EF_mu8_hPosEff_pt0_cent3_total__216","mu^{+},eff,all eta (total)",11, xAxis217);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__216->SetBinContent(1,6);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__216->SetBinContent(2,16);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__216->SetBinContent(3,17);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__216->SetBinContent(4,19);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__216->SetBinContent(5,11);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__216->SetBinContent(6,4);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__216->SetBinContent(7,19);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__216->SetBinContent(8,12);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__216->SetBinContent(9,23);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__216->SetBinContent(10,16);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__216->SetBinContent(11,13);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__216->SetMinimum(0.1);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__216->SetMaximum(28);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__216->SetEntries(156);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__216->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   data_B_EF_mu8_hPosEff_pt0_cent3_total__216->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   data_B_EF_mu8_hPosEff_pt0_cent3_total__216->SetLineColor(ci);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__216->GetXaxis()->SetTitle("#eta_{lab}^{#mu}");
   data_B_EF_mu8_hPosEff_pt0_cent3_total__216->GetXaxis()->SetLabelFont(42);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__216->GetXaxis()->SetLabelSize(0.035);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__216->GetXaxis()->SetTitleSize(0.035);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__216->GetXaxis()->SetTitleFont(42);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__216->GetYaxis()->SetTitle("Probes");
   data_B_EF_mu8_hPosEff_pt0_cent3_total__216->GetYaxis()->SetLabelFont(42);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__216->GetYaxis()->SetLabelSize(0.035);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__216->GetYaxis()->SetTitleSize(0.035);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__216->GetYaxis()->SetTitleFont(42);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__216->GetZaxis()->SetLabelFont(42);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__216->GetZaxis()->SetLabelSize(0.035);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__216->GetZaxis()->SetTitleSize(0.035);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__216->GetZaxis()->SetTitleFont(42);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__216->Draw("hist");
   Double_t xAxis218[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1D *data_B_EF_mu8_hPosEff_pt0_cent3_passed__217 = new TH1D("data_B_EF_mu8_hPosEff_pt0_cent3_passed__217","mu^{+},eff,all eta (passed)",11, xAxis218);
   data_B_EF_mu8_hPosEff_pt0_cent3_passed__217->SetBinContent(1,6);
   data_B_EF_mu8_hPosEff_pt0_cent3_passed__217->SetBinContent(2,16);
   data_B_EF_mu8_hPosEff_pt0_cent3_passed__217->SetBinContent(3,17);
   data_B_EF_mu8_hPosEff_pt0_cent3_passed__217->SetBinContent(4,13);
   data_B_EF_mu8_hPosEff_pt0_cent3_passed__217->SetBinContent(5,8);
   data_B_EF_mu8_hPosEff_pt0_cent3_passed__217->SetBinContent(6,2);
   data_B_EF_mu8_hPosEff_pt0_cent3_passed__217->SetBinContent(7,18);
   data_B_EF_mu8_hPosEff_pt0_cent3_passed__217->SetBinContent(8,9);
   data_B_EF_mu8_hPosEff_pt0_cent3_passed__217->SetBinContent(9,21);
   data_B_EF_mu8_hPosEff_pt0_cent3_passed__217->SetBinContent(10,15);
   data_B_EF_mu8_hPosEff_pt0_cent3_passed__217->SetBinContent(11,12);
   data_B_EF_mu8_hPosEff_pt0_cent3_passed__217->SetEntries(137);
   data_B_EF_mu8_hPosEff_pt0_cent3_passed__217->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   data_B_EF_mu8_hPosEff_pt0_cent3_passed__217->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   data_B_EF_mu8_hPosEff_pt0_cent3_passed__217->SetLineColor(ci);
   data_B_EF_mu8_hPosEff_pt0_cent3_passed__217->GetXaxis()->SetLabelFont(42);
   data_B_EF_mu8_hPosEff_pt0_cent3_passed__217->GetXaxis()->SetLabelSize(0.035);
   data_B_EF_mu8_hPosEff_pt0_cent3_passed__217->GetXaxis()->SetTitleSize(0.035);
   data_B_EF_mu8_hPosEff_pt0_cent3_passed__217->GetXaxis()->SetTitleFont(42);
   data_B_EF_mu8_hPosEff_pt0_cent3_passed__217->GetYaxis()->SetLabelFont(42);
   data_B_EF_mu8_hPosEff_pt0_cent3_passed__217->GetYaxis()->SetLabelSize(0.035);
   data_B_EF_mu8_hPosEff_pt0_cent3_passed__217->GetYaxis()->SetTitleSize(0.035);
   data_B_EF_mu8_hPosEff_pt0_cent3_passed__217->GetYaxis()->SetTitleFont(42);
   data_B_EF_mu8_hPosEff_pt0_cent3_passed__217->GetZaxis()->SetLabelFont(42);
   data_B_EF_mu8_hPosEff_pt0_cent3_passed__217->GetZaxis()->SetLabelSize(0.035);
   data_B_EF_mu8_hPosEff_pt0_cent3_passed__217->GetZaxis()->SetTitleSize(0.035);
   data_B_EF_mu8_hPosEff_pt0_cent3_passed__217->GetZaxis()->SetTitleFont(42);
   data_B_EF_mu8_hPosEff_pt0_cent3_passed__217->Draw("histsame");
   Double_t xAxis219[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1D *data_B_EF_mu8_hPosEff_pt0_cent3_total__218 = new TH1D("data_B_EF_mu8_hPosEff_pt0_cent3_total__218","mu^{+},eff,all eta (total)",11, xAxis219);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__218->SetBinContent(1,6);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__218->SetBinContent(2,16);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__218->SetBinContent(3,17);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__218->SetBinContent(4,19);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__218->SetBinContent(5,11);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__218->SetBinContent(6,4);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__218->SetBinContent(7,19);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__218->SetBinContent(8,12);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__218->SetBinContent(9,23);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__218->SetBinContent(10,16);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__218->SetBinContent(11,13);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__218->SetMinimum(0.1);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__218->SetMaximum(28);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__218->SetEntries(156);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__218->SetDirectory(0);

   ci = TColor::GetColor("#ff0000");
   data_B_EF_mu8_hPosEff_pt0_cent3_total__218->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   data_B_EF_mu8_hPosEff_pt0_cent3_total__218->SetLineColor(ci);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__218->GetXaxis()->SetTitle("#eta_{lab}^{#mu}");
   data_B_EF_mu8_hPosEff_pt0_cent3_total__218->GetXaxis()->SetLabelFont(42);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__218->GetXaxis()->SetLabelSize(0.035);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__218->GetXaxis()->SetTitleSize(0.035);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__218->GetXaxis()->SetTitleFont(42);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__218->GetYaxis()->SetTitle("Probes");
   data_B_EF_mu8_hPosEff_pt0_cent3_total__218->GetYaxis()->SetLabelFont(42);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__218->GetYaxis()->SetLabelSize(0.035);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__218->GetYaxis()->SetTitleSize(0.035);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__218->GetYaxis()->SetTitleFont(42);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__218->GetZaxis()->SetLabelFont(42);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__218->GetZaxis()->SetLabelSize(0.035);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__218->GetZaxis()->SetTitleSize(0.035);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__218->GetZaxis()->SetTitleFont(42);
   data_B_EF_mu8_hPosEff_pt0_cent3_total__218->Draw("sameaxis");
   TLatex *   tex = new TLatex(0.6221264,0.4892241,"EF_mu8(PeriodB), #mu^{+} 20-40%");
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
   Double_t xAxis220[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1F *hdummy__219 = new TH1F("hdummy__219","hdummy",11, xAxis220);
   hdummy__219->SetMinimum(0.2);
   hdummy__219->SetMaximum(1.09);
   hdummy__219->SetDirectory(0);
   hdummy__219->SetStats(0);
   hdummy__219->SetLineWidth(2);
   hdummy__219->SetMarkerStyle(20);
   hdummy__219->SetMarkerSize(1.2);
   hdummy__219->GetXaxis()->SetTitle("#eta^{#mu}");
   hdummy__219->GetXaxis()->SetLabelFont(42);
   hdummy__219->GetXaxis()->SetLabelSize(0.07);
   hdummy__219->GetXaxis()->SetTitleSize(0.1);
   hdummy__219->GetXaxis()->SetTitleOffset(0.87);
   hdummy__219->GetXaxis()->SetTitleFont(42);
   hdummy__219->GetYaxis()->SetTitle("#epsilon");
   hdummy__219->GetYaxis()->SetLabelFont(42);
   hdummy__219->GetYaxis()->SetLabelSize(0.07);
   hdummy__219->GetYaxis()->SetTitleSize(0.09);
   hdummy__219->GetYaxis()->SetTitleOffset(0.44);
   hdummy__219->GetYaxis()->SetTitleFont(42);
   hdummy__219->GetZaxis()->SetLabelFont(42);
   hdummy__219->GetZaxis()->SetLabelSize(0.05);
   hdummy__219->GetZaxis()->SetTitleSize(0.05);
   hdummy__219->GetZaxis()->SetTitleFont(42);
   hdummy__219->Draw("");
   Double_t xAxis55[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TEfficiency * data_B_EF_mu8_hPosEff_pt0_cent355 = new TEfficiency("data_B_EF_mu8_hPosEff_pt0_cent3","mu^{+},eff,all eta",11,xAxis55);
   
   data_B_EF_mu8_hPosEff_pt0_cent355->SetConfidenceLevel(0.6826895);
   data_B_EF_mu8_hPosEff_pt0_cent355->SetBetaAlpha(1);
   data_B_EF_mu8_hPosEff_pt0_cent355->SetBetaBeta(1);
   data_B_EF_mu8_hPosEff_pt0_cent355->SetWeight(0.08333333);
   data_B_EF_mu8_hPosEff_pt0_cent355->SetStatisticOption(0);
   data_B_EF_mu8_hPosEff_pt0_cent355->SetPosteriorMode(0);
   data_B_EF_mu8_hPosEff_pt0_cent355->SetShortestInterval(0);
   data_B_EF_mu8_hPosEff_pt0_cent355->SetTotalEvents(0,0);
   data_B_EF_mu8_hPosEff_pt0_cent355->SetPassedEvents(0,0);
   data_B_EF_mu8_hPosEff_pt0_cent355->SetTotalEvents(1,6);
   data_B_EF_mu8_hPosEff_pt0_cent355->SetPassedEvents(1,6);
   data_B_EF_mu8_hPosEff_pt0_cent355->SetTotalEvents(2,16);
   data_B_EF_mu8_hPosEff_pt0_cent355->SetPassedEvents(2,16);
   data_B_EF_mu8_hPosEff_pt0_cent355->SetTotalEvents(3,17);
   data_B_EF_mu8_hPosEff_pt0_cent355->SetPassedEvents(3,17);
   data_B_EF_mu8_hPosEff_pt0_cent355->SetTotalEvents(4,19);
   data_B_EF_mu8_hPosEff_pt0_cent355->SetPassedEvents(4,13);
   data_B_EF_mu8_hPosEff_pt0_cent355->SetTotalEvents(5,11);
   data_B_EF_mu8_hPosEff_pt0_cent355->SetPassedEvents(5,8);
   data_B_EF_mu8_hPosEff_pt0_cent355->SetTotalEvents(6,4);
   data_B_EF_mu8_hPosEff_pt0_cent355->SetPassedEvents(6,2);
   data_B_EF_mu8_hPosEff_pt0_cent355->SetTotalEvents(7,19);
   data_B_EF_mu8_hPosEff_pt0_cent355->SetPassedEvents(7,18);
   data_B_EF_mu8_hPosEff_pt0_cent355->SetTotalEvents(8,12);
   data_B_EF_mu8_hPosEff_pt0_cent355->SetPassedEvents(8,9);
   data_B_EF_mu8_hPosEff_pt0_cent355->SetTotalEvents(9,23);
   data_B_EF_mu8_hPosEff_pt0_cent355->SetPassedEvents(9,21);
   data_B_EF_mu8_hPosEff_pt0_cent355->SetTotalEvents(10,16);
   data_B_EF_mu8_hPosEff_pt0_cent355->SetPassedEvents(10,15);
   data_B_EF_mu8_hPosEff_pt0_cent355->SetTotalEvents(11,13);
   data_B_EF_mu8_hPosEff_pt0_cent355->SetPassedEvents(11,12);
   data_B_EF_mu8_hPosEff_pt0_cent355->SetTotalEvents(12,0);
   data_B_EF_mu8_hPosEff_pt0_cent355->SetPassedEvents(12,0);
   data_B_EF_mu8_hPosEff_pt0_cent355->SetFillColor(19);
   data_B_EF_mu8_hPosEff_pt0_cent355->Draw("pesame");
   c_2->Modified();
   c_1->cd();
   c_1->Modified();
   canv_TP_pos_B_cent3_EF_mu8->cd();
   canv_TP_pos_B_cent3_EF_mu8->Modified();
   canv_TP_pos_B_cent3_EF_mu8->cd();
   canv_TP_pos_B_cent3_EF_mu8->SetSelected(canv_TP_pos_B_cent3_EF_mu8);
}
